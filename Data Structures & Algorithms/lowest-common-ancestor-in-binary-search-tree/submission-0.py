# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def search(self, root: TreeNode, p: TreeNode, q: TreeNode)-> TreeNode:
        if(root is None):
            return None
        if((root.val>=p.val and root.val<=q.val)or (root.val<=p.val and root.val>=q.val)):
            return root
        else:
            if(root.val<=q.val):
                return self.search(root.right,p,q)
            else:
                return self.search(root.left,p,q)

    def lowestCommonAncestor(self, root: TreeNode, p: TreeNode, q: TreeNode) -> TreeNode:
        return self.search(root,p,q)
        