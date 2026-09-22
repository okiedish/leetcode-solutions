// Title: Merge Two Sorted Lists
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/merge-two-sorted-lists/

            list1 = list1->next;
        } else {
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }
    
    current->next = (list1 != NULL) ? list1 : list2;
    
    return dummy.next;
}

