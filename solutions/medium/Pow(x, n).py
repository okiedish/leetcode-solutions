// Title: Pow(x, n)
            // Difficulty: Medium
            // Language: Python
            // Link: https://leetcode.com/problems/pow(x,-n)/

    def myPow(self, x, n):
        negative = n < 0
        n = abs(n)

        result = 1.0

        while n > 0:
            if n & 1:
                result *= x

            x *= x
            n >>= 1

        return 1.0 / result if negative else result

