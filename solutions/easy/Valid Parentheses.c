// Title: Valid Parentheses
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/valid-parentheses/

            char topBracket = stack[top--];

            if ((s[i] == ')' && topBracket != '(') ||
                (s[i] == ']' && topBracket != '[') ||
                (s[i] == '}' && topBracket != '{')) {
                return false;
            }
        }
    }

    // Stack should be empty
    return top == -1;
}
