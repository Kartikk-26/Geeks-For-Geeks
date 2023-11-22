class Solution:
    def isSymmetric(self, root):
        def fun(node1, node2):
            return True if not node1 and not node2 else (False if ((not node1 or not node2) or (node1.data!=node2.data)) else (fun(node1.left, node2.right) and fun(node1.right, node2.left)))
        return fun(root.left, root.right) if root else True
