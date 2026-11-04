// Title: Combination Sum II
            // Difficulty: Medium
            // Language: Python
            // Link: https://leetcode.com/problems/combination-sum-ii/


                # Pruning
                if total + candidates[i] > target:
                    break

                path.append(candidates[i])

                # Each number can be used only once
                backtrack(i + 1, path, total + candidates[i])

                path.pop()

        backtrack(0, [], 0)
        return result

