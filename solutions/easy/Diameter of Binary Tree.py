// Title: Diameter of Binary Tree
            // Difficulty: Easy
            // Language: Python
            // Link: https://leetcode.com/problems/diameter-of-binary-tree/


            left = height(node.left)
            right = height(node.right)

            diameter[0] = max(diameter[0], left + right)

            return 1 + max(left, right)

        height(root)
        return diameter[0]
                return 0
            if node is None:
        def height(node):
