// Title: 4Sum
            // Difficulty: Medium
            // Language: C
            // Link: https://leetcode.com/problems/4sum/

#include <stdio.h>
#include <stdlib.h>

int** fourSum(int* nums, int numsSize, int target, int* returnSize, int** returnColumnSizes); // 
Function prototype

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int** fourSum(int* nums, int numsSize, int target, int* returnSize, int** returnColumnSizes) {
    qsort(nums, numsSize, sizeof(int), compare);
    *returnSize = 0;
    int maxResults = numsSize * numsSize;
