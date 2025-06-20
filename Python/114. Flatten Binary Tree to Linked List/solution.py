class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution(object):
    def flatten(self, root):
        curr = root
        while curr:
            if curr.left:
                runner = curr.left
                while runner.right:
                    runner = runner.right
                runner.right, curr.right, curr.left = curr.right, curr.left, None
            curr = curr.right