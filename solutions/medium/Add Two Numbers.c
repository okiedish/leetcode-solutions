// Title: Add Two Numbers
            // Difficulty: Medium
            // Language: C
            // Link: https://leetcode.com/problems/add-two-numbers/

        newNode->val = digit;
        newNode->next = NULL;

        current->next = newNode;
        current = current->next;
    }

    struct ListNode* result = dummy->next;

    free(dummy);

    return result;
}
