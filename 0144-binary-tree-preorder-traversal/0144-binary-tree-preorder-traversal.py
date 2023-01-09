# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def preorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        listt =[]
        def preorder_recursion(root, listt):
            if(root == None):
                return
            listt.append(root.val)
            preorder_recursion(root.left, listt)
            preorder_recursion(root.right, listt)
        preorder_recursion(root, listt)
        return listt