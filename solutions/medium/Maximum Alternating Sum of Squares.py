// Title: Maximum Alternating Sum of Squares
            // Difficulty: Medium
            // Language: Python
            // Link: https://leetcode.com/problems/maximum-alternating-sum-of-squares/

class Solution(object):
    def maxAlternatingSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        squares = sorted(x * x for x in nums)

        n = len(nums)
        positive = (n + 1) // 2
        negative = n // 2

        return sum(squares[-positive:]) - sum(squares[:negative])
