# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:

    def __init__(self):
        self.res = 0

    def height(self, node : TreeNode) -> int:

        if node == None:
            return 0

        left = self.height(node.left)
        right = self.height(node.right)

        self.res = max(self.res, left + right)
        return max(left, right) + 1

    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.height(root)
        return self.res
        