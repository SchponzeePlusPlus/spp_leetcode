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
 */

#include <stdio.h>
#include <stdlib.h>

//User function Template for C

// Visible in Leetcode Editor: Begins Here

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	// Visible in Leetcode Editor: Ends Here
	// Submission to Leetcode starts here

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
	int *result = (int *)malloc(int(sizeof(target) * returnSize));

	bool bo_chkTwoSumArrComplete = false;

	int i = 0;
	int j = 1;
	while ((i < numsSize) && (!bo_chkTwoSumArrComplete))
	{
		while ((j < numsSize) && (!bo_chkTwoSumArrComplete))
		{
			bo_chkTwoSumArrComplete = (((nums[i] + nums[j]) == target) && (i != j));
		}
		if (!bo_chkTwoSumArrComplete)
		{
			i++;
			j++;
		}
		
	}

	if (bo_chkTwoSumArrComplete)
	{
		result[0] = i;
		result[1] = j;
	}
	else
	{
		result = NULL;
	}

	return result;

	// Submission to Leetcode ends here
}

//{ Driver Code Starts
//Initial Template for C

int main()
{
	int* nums.....up to this part;
	char char_chkProgUsrTerminate = 'y';

	scanf("%d", &t);

	twoSum()
	
	while((chkProgUsrTerminate == 'y'))
	{   
		int a;
		
		scanf("%d", &a);
		twoSum(&a);

		printf("%d\n", a);
		printf("~%s", "\n");

		printf("Try again? (y/n)", "\n");
		scanf(char_chkProgUsrTerminate);
	}

	return 0;
}
// } Driver Code Ends

// Result in Leetcode: N/A