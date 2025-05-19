/*
 *	Problem #1: Two Sum
 *
 *	https://leetcode.com/problems/two-sum/description/
 *
 * Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
 

Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?

Topics
Array
Hash Table
Companies
Hint 1
A really brute force way would be to search for all possible pairs of numbers but that would be too slow. Again, it's best to try out brute force solutions for just for completeness. It is from these brute force solutions that you can come up with optimizations.
Hint 2
So, if we fix one of the numbers, say x, we have to scan the entire array to find the next number y which is value - x where value is the input parameter. Can we change our array somehow so that this search becomes faster?
Hint 3
The second train of thought is, without changing the array, can we use additional space somehow? Like maybe a hash map to speed up the search?
 *
 * Solution Attempt: 01
 */

// The boolean (bool) data type is not built-in to C, therefore the library below is required
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
// To use time library of C
#include <time.h>

//User function Template for C

// https://www.geeksforgeeks.org/time-delay-c/
void delay(int number_of_seconds)
{
	// Converting time into milli_seconds
	int milli_seconds = 1000 * number_of_seconds;

	// Storing start time
	clock_t start_time = clock();

	// looping till required time is not achieved
	while (clock() < start_time + milli_seconds)
		;
}

// Visible in Leetcode Editor: Begins Here

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	// Visible in Leetcode Editor: Ends Here
	// Submission to Leetcode starts here

	printf("\nEntered twoSum() function.\n\n");

	printf("\ntwoSum() Parameter Arguments Passed\n\n");
	printf("nums Array:	");
	printf("[ ");
	for (int i = 0; i < (numsSize - 1); i++)
	{
		printf("%d", nums[i]);
		printf(", ");
	}
	printf("%d", nums[(numsSize - 1)]);
	printf(" ]\n");

	printf("\nnums Array Element Length:	");
	printf("%d\n", numsSize);

	printf("\nTarget Sum:	");
	printf("%d\n", target);

	printf("\nReturn Sum Array Element Length:	");
	printf("%d\n", *returnSize);

	fflush(stdout);

	/*
	 * malloc()
	 * https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/
	 * The malloc() (stands for memory allocation) function is used to allocate a single
	 * block of * contiguous memory on the heap at runtime. The memory allocated by malloc()
	 * is uninitialized, * meaning it contains garbage values.
	 * 
	 * Syntax:
	 * malloc(size);
	 * where size is the number of bytes to allocate.
	 * This function returns a void pointer to the allocated memory that needs to be
	 * converted to the pointer of required type to be usable. If allocation fails,
	 * it returns NULL pointer.
	 */
	// I use target because it's an already existing integer variable that I can
	//   use to measure the memory allocation I need
	int *result;
	
	*returnSize = 2;
	result = (int *)malloc(((int) sizeof(int)) * ((int) *returnSize));

	/* printf("\nResult memory allocated, continuing with function calculation...\n\n");
	fflush(stdout); */

	bool bo_chkTwoSumArrComplete = false;

	int i = 0;
	int j = 1;

	/* printf("\nOther local variables declared, continuing with function calculation...\n\n");
	fflush(stdout); */

	while ((i < (numsSize - 1)) && (!bo_chkTwoSumArrComplete))
	{
		while ((j < numsSize) && (!bo_chkTwoSumArrComplete))
		{
			/* printf("i : %d\n", i);
			printf("j : %d\n", j);
			fflush(stdout); */
			bo_chkTwoSumArrComplete = (((nums[i] + nums[j]) == target) && (i != j));

			if (!bo_chkTwoSumArrComplete)
			{
				j++;
			}

			//delay(1000);
		}
		if (!bo_chkTwoSumArrComplete)
		{
			i++;
			j = 1;
			//j++;
		}
		
	}

	if (bo_chkTwoSumArrComplete)
	{
		result[0] = i;
		result[1] = j;
	}
	else
	{
		// Used {result = NULL;} previously
		result[0] = -1;
		result[1] = -2;
	}

	printf("\ntwoSum() function almost complete, returning result...\n\n");
	fflush(stdout);

	return result;
	free(result);
	// Submission to Leetcode ends here
}

//{ Driver Code Starts
//Initial Template for C

int main()
{
	fflush(stdout);
	printf("\n\n----------------------------------------\n");
	printf("Program Initialised.\n");
	printf("----------------------------------------\n\n\n");
	fflush(stdout);

	int* intArr_testCaseNums;
	int intArr_testCaseNumsArrLen = 0;
	int* intArr_testCaseNumsTargetSumElems;
	int int_testCaseTargetSum = 0;
	int* intArr_testCaseNumsTargetSumElemsArrLen;
	
	char char_chkProgUsrTerminate = 'y';

	// Test Case 1
	intArr_testCaseNumsArrLen = 4;
	intArr_testCaseNums = (int *)malloc(((int) sizeof(int)) * ((int) intArr_testCaseNumsArrLen));
	intArr_testCaseNums[0] = 2;
	intArr_testCaseNums[1] = 7;
	intArr_testCaseNums[2] = 11;
	intArr_testCaseNums[3] = 15;
	//intArr_testCaseNums = [2, 7, 11, 15];
	int_testCaseTargetSum = 9;
	intArr_testCaseNumsTargetSumElemsArrLen = (int *)malloc((int) sizeof(int));
	*intArr_testCaseNumsTargetSumElemsArrLen = 0;

	fflush(stdout);
	printf("\nTest Case 1\n\n");
	printf("\nInput Data\n\n");
	printf("Test Case Input Array:	");
	printf("[ ");
	for (int i = 0; i < (intArr_testCaseNumsArrLen - 1); i++)
	{
		printf("%d", intArr_testCaseNums[i]);
		printf(", ");
	}
	printf("%d", intArr_testCaseNums[(intArr_testCaseNumsArrLen - 1)]);
	printf(" ]\n");

	printf("\nTest Case Number Array Element Length:	");
	printf("%d\n", intArr_testCaseNumsArrLen);

	printf("\nTest Case Target Sum:	");
	printf("%d\n", int_testCaseTargetSum);

	printf("\nAbout to enter twoSum() function...\n\n");
	fflush(stdout);

	intArr_testCaseNumsTargetSumElems = twoSum(intArr_testCaseNums, intArr_testCaseNumsArrLen, int_testCaseTargetSum, intArr_testCaseNumsTargetSumElemsArrLen);

	fflush(stdout);
	printf("\nOutput Data\n\n");
	printf("\nTest Case Sum Array Element Length:	");
	printf("%d\n", *intArr_testCaseNumsTargetSumElemsArrLen);
	printf("Test Case Output Array:	");
	printf("[ ");
	for (int i = 0; i < (*intArr_testCaseNumsTargetSumElemsArrLen - 1); i++)
	{
		printf("%d", intArr_testCaseNumsTargetSumElems[i]);
		printf(", ");
	}
	printf("%d", intArr_testCaseNumsTargetSumElems[(*intArr_testCaseNumsTargetSumElemsArrLen - 1)]);
	printf(" ]\n\n");
	fflush(stdout);

	// Free the memory after completing
	// operations
	free(intArr_testCaseNums);
	free(intArr_testCaseNumsTargetSumElemsArrLen);
	free(intArr_testCaseNumsTargetSumElems);

	// Test Case 2
	intArr_testCaseNumsArrLen = 3;
	intArr_testCaseNums = (int *)malloc(((int) sizeof(int)) * ((int) intArr_testCaseNumsArrLen));
	intArr_testCaseNums[0] = 3;
	intArr_testCaseNums[1] = 2;
	intArr_testCaseNums[2] = 4;
	//intArr_testCaseNums = [2, 7, 11, 15];
	int_testCaseTargetSum = 6;
	intArr_testCaseNumsTargetSumElemsArrLen = (int *)malloc((int) sizeof(int));
	*intArr_testCaseNumsTargetSumElemsArrLen = 0;

	fflush(stdout);
	printf("\nTest Case 2\n\n");
	printf("\nInput Data\n\n");
	printf("Test Case Input Array:	");
	printf("[ ");
	for (int i = 0; i < (intArr_testCaseNumsArrLen - 1); i++)
	{
		printf("%d", intArr_testCaseNums[i]);
		printf(", ");
	}
	printf("%d", intArr_testCaseNums[(intArr_testCaseNumsArrLen - 1)]);
	printf(" ]\n");

	printf("\nTest Case Number Array Element Length:	");
	printf("%d\n", intArr_testCaseNumsArrLen);

	printf("\nTest Case Target Sum:	");
	printf("%d\n", int_testCaseTargetSum);

	printf("\nAbout to enter twoSum() function...\n\n");
	fflush(stdout);

	intArr_testCaseNumsTargetSumElems = twoSum(intArr_testCaseNums, intArr_testCaseNumsArrLen, int_testCaseTargetSum, intArr_testCaseNumsTargetSumElemsArrLen);

	fflush(stdout);
	printf("\nOutput Data\n\n");
	printf("\nTest Case Sum Array Element Length:	");
	printf("%d\n", *intArr_testCaseNumsTargetSumElemsArrLen);
	printf("Test Case Output Array:	");
	printf("[ ");
	for (int i = 0; i < (*intArr_testCaseNumsTargetSumElemsArrLen - 1); i++)
	{
		printf("%d", intArr_testCaseNumsTargetSumElems[i]);
		printf(", ");
	}
	printf("%d", intArr_testCaseNumsTargetSumElems[(*intArr_testCaseNumsTargetSumElemsArrLen - 1)]);
	printf(" ]\n\n");
	fflush(stdout);

	// Free the memory after completing
	// operations
	free(intArr_testCaseNums);
	free(intArr_testCaseNumsTargetSumElemsArrLen);
	free(intArr_testCaseNumsTargetSumElems);

	// Test Case 3
	intArr_testCaseNumsArrLen = 2;
	intArr_testCaseNums = (int *)malloc(((int) sizeof(int)) * ((int) intArr_testCaseNumsArrLen));
	intArr_testCaseNums[0] = 3;
	intArr_testCaseNums[1] = 3;
	//intArr_testCaseNums = [2, 7, 11, 15];
	int_testCaseTargetSum = 6;
	intArr_testCaseNumsTargetSumElemsArrLen = (int *)malloc((int) sizeof(int));
	*intArr_testCaseNumsTargetSumElemsArrLen = 0;

	fflush(stdout);
	printf("\nTest Case 3\n\n");
	printf("\nInput Data\n\n");
	printf("Test Case Input Array:	");
	printf("[ ");
	for (int i = 0; i < (intArr_testCaseNumsArrLen - 1); i++)
	{
		printf("%d", intArr_testCaseNums[i]);
		printf(", ");
	}
	printf("%d", intArr_testCaseNums[(intArr_testCaseNumsArrLen - 1)]);
	printf(" ]\n");

	printf("\nTest Case Number Array Element Length:	");
	printf("%d\n", intArr_testCaseNumsArrLen);

	printf("\nTest Case Target Sum:	");
	printf("%d\n", int_testCaseTargetSum);

	printf("\nAbout to enter twoSum() function...\n\n");
	fflush(stdout);

	intArr_testCaseNumsTargetSumElems = twoSum(intArr_testCaseNums, intArr_testCaseNumsArrLen, int_testCaseTargetSum, intArr_testCaseNumsTargetSumElemsArrLen);

	fflush(stdout);
	printf("\nOutput Data\n\n");
	printf("\nTest Case Sum Array Element Length:	");
	printf("%d\n", *intArr_testCaseNumsTargetSumElemsArrLen);
	printf("Test Case Output Array:	");
	printf("[ ");
	for (int i = 0; i < (*intArr_testCaseNumsTargetSumElemsArrLen - 1); i++)
	{
		printf("%d", intArr_testCaseNumsTargetSumElems[i]);
		printf(", ");
	}
	printf("%d", intArr_testCaseNumsTargetSumElems[(*intArr_testCaseNumsTargetSumElemsArrLen - 1)]);
	printf(" ]\n\n");
	fflush(stdout);

	// Free the memory after completing
	// operations
	free(intArr_testCaseNums);
	free(intArr_testCaseNumsTargetSumElemsArrLen);
	free(intArr_testCaseNumsTargetSumElems);

	// Test Case 4
	intArr_testCaseNumsArrLen = 4;
	intArr_testCaseNums = (int *)malloc(((int) sizeof(int)) * ((int) intArr_testCaseNumsArrLen));
	intArr_testCaseNums[0] = 4;
	intArr_testCaseNums[1] = 3;
	intArr_testCaseNums[2] = 2;
	intArr_testCaseNums[3] = 1;
	//intArr_testCaseNums = [2, 7, 11, 15];
	int_testCaseTargetSum = 10;
	intArr_testCaseNumsTargetSumElemsArrLen = (int *)malloc((int) sizeof(int));
	*intArr_testCaseNumsTargetSumElemsArrLen = 0;

	fflush(stdout);
	printf("\nTest Case 4\n\n");
	printf("\nInput Data\n\n");
	printf("Test Case Input Array:	");
	printf("[ ");
	for (int i = 0; i < (intArr_testCaseNumsArrLen - 1); i++)
	{
		printf("%d", intArr_testCaseNums[i]);
		printf(", ");
	}
	printf("%d", intArr_testCaseNums[(intArr_testCaseNumsArrLen - 1)]);
	printf(" ]\n");

	printf("\nTest Case Number Array Element Length:	");
	printf("%d\n", intArr_testCaseNumsArrLen);

	printf("\nTest Case Target Sum:	");
	printf("%d\n", int_testCaseTargetSum);

	printf("\nAbout to enter twoSum() function...\n\n");
	fflush(stdout);

	intArr_testCaseNumsTargetSumElems = twoSum(intArr_testCaseNums, intArr_testCaseNumsArrLen, int_testCaseTargetSum, intArr_testCaseNumsTargetSumElemsArrLen);

	fflush(stdout);
	printf("\nOutput Data\n\n");
	printf("\nTest Case Sum Array Element Length:	");
	printf("%d\n", *intArr_testCaseNumsTargetSumElemsArrLen);
	printf("Test Case Output Array:	");
	printf("[ ");
	for (int i = 0; i < (*intArr_testCaseNumsTargetSumElemsArrLen - 1); i++)
	{
		printf("%d", intArr_testCaseNumsTargetSumElems[i]);
		printf(", ");
	}
	printf("%d", intArr_testCaseNumsTargetSumElems[(*intArr_testCaseNumsTargetSumElemsArrLen - 1)]);
	printf(" ]\n\n");
	fflush(stdout);

	// Free the memory after completing
	// operations
	free(intArr_testCaseNums);
	free(intArr_testCaseNumsTargetSumElemsArrLen);
	free(intArr_testCaseNumsTargetSumElems);
	
	/*
	while((char_chkProgUsrTerminate == 'y'))
	{   
		int a;
		
		scanf("%d", &a);
		twoSum(&a);

		printf("%d\n", a);
		printf("~%s", "\n");

		printf("Try again? (y/n)", "\n");
		scanf(char_chkProgUsrTerminate);
	}
	*/

	// Free the memory after completing
	// operations
	//free(intArr_testCaseNums);
	//free(intArr_testCaseNumsTargetSumElemsArrLen);
	//free(intArr_testCaseNumsTargetSumElems);

	fflush(stdout);
	printf("\n\n----------------------------------------\n");
	printf("Program Complete.\n");
	printf("Terminating Program...\n");
	printf("----------------------------------------\n\n\n");
	fflush(stdout);

	return 0;
}
// } Driver Code Ends