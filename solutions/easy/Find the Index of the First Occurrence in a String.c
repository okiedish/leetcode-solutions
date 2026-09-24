// Title: Find the Index of the First Occurrence in a String
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

int strStr(char* haystack, char* needle) {
    if (!*needle) return 0;

    int i = 0, j = 0;
    while (haystack[i]) {
        j = 0;
        while (needle[j] && haystack[i + j] == needle[j]) {
            j++;
        }
        if (!needle[j]) {
            return i;
        }
        i++;
    }
