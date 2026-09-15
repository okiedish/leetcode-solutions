// Title: String to Integer (atoi)
            // Difficulty: Medium
            // Language: C
            // Link: https://leetcode.com/problems/string-to-integer-(atoi)/

                return INT_MIN;
        }

        result = result * 10 + digit;

        i++;
    }

    // 5. Apply sign
    result = result * sign;

    return (int)result;
}
