// Title: Longest Palindromic Substring
            // Difficulty: Medium
            // Language: C
            // Link: https://leetcode.com/problems/longest-palindromic-substring/

                start = left;
                maxLen = right - left + 1; }
            left--;
            right++; }}
    char* result = (char*)malloc(maxLen + 1); // +1 for '\0'
    strncpy(result, s + start, maxLen);
    result[maxLen] = '\0';  // Null-terminate the string
    return result;
}

