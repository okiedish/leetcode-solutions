// Title: Minimum Insertions to Balance a Parentheses String
            // Difficulty: Medium
            // Language: Python
            // Link: https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/

                    i += 1

                # Now this '))' needs an opening '('
                if open > 0:
                    open -= 1
                else:
                    # Insert an opening '('
                    ans += 1

        # Every remaining '(' needs two ')'
        ans += 2 * open

        return ans
