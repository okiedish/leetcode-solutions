// Title: Combination Sum
            // Difficulty: Medium
            // Language: Python
            // Link: https://leetcode.com/problems/combination-sum/

            
            for i in range(start, len(candidates)):
                path.append(candidates[i])
                
                backtrack(i, path, total + candidates[i])
                
                path.pop()
        
        backtrack(0, [], 0)
        return result

