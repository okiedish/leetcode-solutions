// Title: Construct Binary Search Tree from Preorder Traversal
            // Difficulty: Medium
            // Language: Python
            // Link: https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/

        if not preorder:
            return None

        root = TreeNode(preorder[0])

        i = 1
        while i < len(preorder) and preorder[i] < root.val:
            i += 1

        root.left = self.bstFromPreorder(preorder[1:i])
        root.right = self.bstFromPreorder(preorder[i:])
    def bstFromPreorder(self, preorder):
        
class Solution(object):
