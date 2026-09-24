// Title: Permutations
            // Difficulty: Medium
            // Language: Python
            // Link: https://leetcode.com/problems/permutations/

                return

            for i in range(len(remaining)):
                backtrack(
                    path + [remaining[i]],
                    remaining[:i] + remaining[i+1:]
                )

        backtrack([], nums)
        return res
