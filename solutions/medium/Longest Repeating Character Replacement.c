// Title: Longest Repeating Character Replacement
            // Difficulty: Medium
            // Language: C
            // Link: https://leetcode.com/problems/longest-repeating-character-replacement/


        if (windowSize - maxFreq > k) {
            freq[s[left] - 'A']--;
            left++;
        }

        windowSize = right - left + 1;

        if (windowSize > maxLength) {
            maxLength = windowSize;
        }
    }

    return maxLength;
}
