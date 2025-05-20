/*
 *	Problem #1: Two Sum (C#)
 *
 *	https://leetcode.com/problems/two-sum/description/
 *
 *
Solved
Easy
Topics
Companies
Hint
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

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
Seen this question in a real interview before?
1/5
Yes
No
Accepted
17.2M
Submissions
30.9M
Acceptance Rate
55.6%
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

// Code Not Being Submitted to Leetcode starts here

using System;

// Code Not Being Submitted to Leetcode ends here

// Code provided in Leetcode Editor: Begins Here

public class Solution
{
	public int[] TwoSum(int[] nums, int target) {
		// Code provided in Leetcode Editor: Ends Here

		// Submission to Leetcode starts here
		int[] result = [-1, -2];

		// https://stackoverflow.com/questions/2843987/array-size-length-in-c-sharp
		int int_numsArrLength = nums.Length;

		/* Console.WriteLine("\nResult memory allocated, continuing with function calculation...\n\n");
		fflush(stdout); */

		bool bo_chkTwoSumArrComplete = false;

		int i = 0;
		int j = 1;

		/* Console.WriteLine("\nOther local variables declared, continuing with function calculation...\n\n");
		fflush(stdout); */

		while ((i < (int_numsArrLength - 1)) && (!bo_chkTwoSumArrComplete))
		{
			while ((j < int_numsArrLength) && (!bo_chkTwoSumArrComplete))
			{
				/* Console.WriteLine("i : %d\n", i);
				Console.WriteLine("j : %d\n", j);
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

		//Console.WriteLine("\ntwoSum() function almost complete, returning result...\n\n");

		return result;
		//free(result);

		// Submission to Leetcode ends here

		// Code provided in Leetcode Editor: Begins Here
	}
}

// Code provided in Leetcode Editor: Ends Here

// Code Not Being Submitted to Leetcode starts here

// namespace declaration
namespace TwoSumApp
{
	// Class declaration
	class Classy
	{
		// Main Method 
		static void Main(string[] args)
		{
			//fflush(stdout);
			Console.WriteLine("\n\n----------------------------------------\n");
			Console.WriteLine("Program Initialised.\n");
			Console.WriteLine("----------------------------------------\n\n\n");
			//fflush(stdout);

			int[] intArr_testCaseNums;
			int intArr_testCaseNumsArrLen = 0;
			int[] intArr_testCaseNumsTargetSumElems;
			int int_testCaseTargetSum = 0;
			int intArr_testCaseNumsTargetSumElemsArrLen = 0;

			Solution clsSolutn_tstCase01;

			// Test Case 1
			//intArr_testCaseNums[0] = 2;
			//intArr_testCaseNums[1] = 7;
			//intArr_testCaseNums[2] = 11;
			//intArr_testCaseNums[3] = 15;
			intArr_testCaseNums = [2, 7, 11, 15];
			int_testCaseTargetSum = 9;

			intArr_testCaseNumsArrLen = intArr_testCaseNums.Length;

			//fflush(stdout);
			Console.WriteLine("\nTest Case 1\n\n");
			Console.WriteLine("\nInput Data\n\n");
			Console.WriteLine("Test Case Input Array:	");
			Console.WriteLine("[ ");
			for (int i = 0; i < (intArr_testCaseNumsArrLen - 1); i++)
			{
				Console.WriteLine("%d", intArr_testCaseNums[i]);
				Console.WriteLine(", ");
			}
			Console.WriteLine("%d", intArr_testCaseNums[(intArr_testCaseNumsArrLen - 1)]);
			Console.WriteLine(" ]\n");

			Console.WriteLine("\nTest Case Number Array Element Length:	");
			Console.WriteLine("%d\n", intArr_testCaseNumsArrLen);

			Console.WriteLine("\nTest Case Target Sum:	");
			Console.WriteLine("%d\n", int_testCaseTargetSum);

			Console.WriteLine("\nAbout to enter twoSum() function...\n\n");
			//fflush(stdout);

			intArr_testCaseNumsTargetSumElems = clsSolutn_tstCase01.TwoSum(intArr_testCaseNums, int_testCaseTargetSum);

			//intArr_testCaseNumsTargetSumElems = Solution.TwoSum(intArr_testCaseNums, int_testCaseTargetSum);

			intArr_testCaseNumsTargetSumElemsArrLen = intArr_testCaseNumsTargetSumElems.Length;

			//fflush(stdout);
			Console.WriteLine("\nOutput Data\n\n");
			Console.WriteLine("\nTest Case Sum Array Element Length:	");
			Console.WriteLine("%d\n", intArr_testCaseNumsTargetSumElemsArrLen);
			Console.WriteLine("Test Case Output Array:	");
			Console.WriteLine("[ ");
			for (int i = 0; i < (intArr_testCaseNumsTargetSumElemsArrLen - 1); i++)
			{
				Console.WriteLine("%d", intArr_testCaseNumsTargetSumElems[i]);
				Console.WriteLine(", ");
			}
			Console.WriteLine("%d", intArr_testCaseNumsTargetSumElems[(intArr_testCaseNumsTargetSumElemsArrLen - 1)]);
			Console.WriteLine(" ]\n\n");
			//fflush(stdout);

			// Free the memory after completing
			// operations
			//free(intArr_testCaseNums);
			//free(intArr_testCaseNumsTargetSumElemsArrLen);
			//free(intArr_testCaseNumsTargetSumElems);

			// statement 
			// printing Hello World! 
			Console.WriteLine("Hello World!");

			// To prevent the screen from 
			// running and closing quickly 
			Console.ReadKey();

			//fflush(stdout);
			Console.WriteLine("\n\n----------------------------------------\n");
			Console.WriteLine("Program Complete.\n");
			Console.WriteLine("Terminating Program...\n");
			Console.WriteLine("----------------------------------------\n\n\n");
			//fflush(stdout);
		}
	}
}
// Code Not Being Submitted to Leetcode ends here