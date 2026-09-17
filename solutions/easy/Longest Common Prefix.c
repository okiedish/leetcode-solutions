// Title: Longest Common Prefix
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/longest-common-prefix/

#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    int i, j;
    for (i = 0; strs[0][i]; i++) {
        for (j = 1; j < strsSize; j++) {
            if (strs[j][i] != strs[0][i]) {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
