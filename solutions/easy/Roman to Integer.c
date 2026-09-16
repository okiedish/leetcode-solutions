// Title: Roman to Integer
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/roman-to-integer/

    int result = 0;
    int prev = 0; 

    for (int i = strlen(s) - 1; i >= 0; i--) {
        int curr = values[s[i]]; 
        
        if (curr < prev) {
            result -= curr; 
        } else {
            result += curr; 
        }
        
        prev = curr; 
    }
