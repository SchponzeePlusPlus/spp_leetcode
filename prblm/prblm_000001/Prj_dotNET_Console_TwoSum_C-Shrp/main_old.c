

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

	
	// Submission to Leetcode ends here
}

//{ Driver Code Starts
//Initial Template for C

int main()
{
	

	
	
	char char_chkProgUsrTerminate = 'y';

	

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

	

	return 0;
}
// } Driver Code Ends