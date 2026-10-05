// Title: Count and Say
            // Difficulty: Medium
            // Language: Python
            // Link: https://leetcode.com/problems/count-and-say/

                # Count consecutive same digits
                while i + 1 < len(result) and result[i] == result[i + 1]:

                    count += 1
                    i += 1

                new_result += str(count) + result[i]
                i += 1

            result = new_result

        return result


