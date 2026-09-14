// Title: Longest Substring Without Repeating Characters
            // Difficulty: Medium
            // Language: C
            // Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/


    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
    int lastIndex[256];  // To store last seen index of each character
    for (int i = 0; i < 256; i++) {
        lastIndex[i] = -1;  // Initialize all to -1
    }

    int maxLength = 0;  // To store the final result
    int start = 0;      // Start of current window
#include <string.h>
#include <stdio.h>

int lengthOfLongestSubstring(char* s) {
