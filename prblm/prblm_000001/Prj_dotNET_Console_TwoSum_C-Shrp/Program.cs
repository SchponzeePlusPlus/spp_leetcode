/*
 * Problem #1: Two Sum (C# (.NET Project))
 *
 * https://leetcode.com/problems/two-sum/description/
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

		/* Console.Write("\nResult memory allocated, continuing with function calculation...\n\n");
		fflush(stdout); */

		bool bo_chkTwoSumArrComplete = false;

		int i = 0;
		int j = 1;

		/* Console.Write("\nOther local variables declared, continuing with function calculation...\n\n");
		fflush(stdout); */

		while ((i < (int_numsArrLength - 1)) && (!bo_chkTwoSumArrComplete))
		{
			while ((j < int_numsArrLength) && (!bo_chkTwoSumArrComplete))
			{
				/* Console.Write("i : %d\n", i);
				Console.Write("j : %d\n", j);
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

		//Console.Write("\ntwoSum() function almost complete, returning result...\n\n");

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
			Console.Write("\n\n----------------------------------------\n");
			Console.Write("Program Initialised.\n");
			Console.Write("----------------------------------------\n\n\n");
			//fflush(stdout);

			int[] intArr_testCaseNums;
			int intArr_testCaseNumsArrLen = 0;
			int[] intArr_testCaseNumsTargetSumElems;
			int int_testCaseTargetSum = 0;
			int intArr_testCaseNumsTargetSumElemsArrLen = 0;

			// statement 
			// printing Hello World! 
			Console.WriteLine("Hello World!");

			// Test Case 1
			// https://learn.microsoft.com/en-us/dotnet/csharp/fundamentals/types/classes
			Solution clsSolutn_slvTwoSum = new Solution();

			//intArr_testCaseNums[0] = 2;
			//intArr_testCaseNums[1] = 7;
			//intArr_testCaseNums[2] = 11;
			//intArr_testCaseNums[3] = 15;
			intArr_testCaseNums = [2, 7, 11, 15];
			int_testCaseTargetSum = 9;

			intArr_testCaseNumsArrLen = intArr_testCaseNums.Length;

			//fflush(stdout);
			Console.Write("\nTest Case 1\n\n");
			Console.Write("\nInput Data\n\n");
			Console.Write("Test Case Input Array:	");
			Console.Write("[ ");
			for (int i = 0; i < (intArr_testCaseNumsArrLen - 1); i++)
			{
				Console.Write(intArr_testCaseNums[i]);
				Console.Write(", ");
			}
			Console.Write(intArr_testCaseNums[(intArr_testCaseNumsArrLen - 1)]);
			Console.Write(" ]\n");

			Console.Write("\nTest Case Number Array Element Length:	");
			Console.Write(intArr_testCaseNumsArrLen);
			Console.Write("\n");

			Console.Write("\nTest Case Target Sum:	");
			Console.Write(int_testCaseTargetSum);
			Console.Write("\n");

			Console.Write("\nAbout to enter twoSum() function...\n\n");
			//fflush(stdout);

			intArr_testCaseNumsTargetSumElems = clsSolutn_slvTwoSum.TwoSum(intArr_testCaseNums, int_testCaseTargetSum);

			//intArr_testCaseNumsTargetSumElems = Solution.TwoSum(intArr_testCaseNums, int_testCaseTargetSum);

			intArr_testCaseNumsTargetSumElemsArrLen = intArr_testCaseNumsTargetSumElems.Length;

			//fflush(stdout);
			Console.Write("\nOutput Data\n\n");
			Console.Write("Test Case Sum Array Element Length:	");
			Console.Write(intArr_testCaseNumsTargetSumElemsArrLen);
			Console.Write("\n\n");
			Console.Write("Test Case Output Array:	");
			Console.Write("[ ");
			for (int i = 0; i < (intArr_testCaseNumsTargetSumElemsArrLen - 1); i++)
			{
				Console.Write(intArr_testCaseNumsTargetSumElems[i]);
				Console.Write(", ");
			}
			Console.Write(intArr_testCaseNumsTargetSumElems[(intArr_testCaseNumsTargetSumElemsArrLen - 1)]);
			Console.Write(" ]\n\n");
			//fflush(stdout);

			// Free the memory after completing
			// operations
			//free(intArr_testCaseNums);
			//free(intArr_testCaseNumsTargetSumElemsArrLen);
			//free(intArr_testCaseNumsTargetSumElems);

			// To prevent the screen from 
			// running and closing quickly 
			Console.ReadKey();

			//fflush(stdout);
			Console.Write("\n\n----------------------------------------\n");
			Console.Write("Program Complete.\n");
			Console.Write("Terminating Program...\n");
			Console.Write("----------------------------------------\n\n\n");
			//fflush(stdout);
		}
	}
}
// Code Not Being Submitted to Leetcode ends here