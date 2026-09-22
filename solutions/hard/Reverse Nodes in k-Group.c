// Title: Reverse Nodes in k-Group
            // Difficulty: Hard
            // Language: C
            // Link: https://leetcode.com/problems/reverse-nodes-in-k-group/

            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        // Connect previous part to reversed group
        struct ListNode *temp = groupPrev->next;
        groupPrev->next = kth;

        // Move groupPrev to the end of reversed group
        groupPrev = temp;
    }
}
