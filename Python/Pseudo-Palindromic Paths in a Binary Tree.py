class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def pseudoPalindromicPaths(self, root: TreeNode) -> int:
        from collections import Counter

        def permutationPalindrome(data):
            data = data.replace(' ', '').lower()
            return sum(freq % 2 for freq in Counter(data).values()) < 2

        self.count = 0

        def dfs(node, path):
            if not node:
                return
            if not node.left and not node.right:
                if permutationPalindrome(path + str(node.val)):
                    self.count += 1
                return
            dfs(node.left, path + str(node.val))
            dfs(node.right, path + str(node.val))

        dfs(root, "")
        return self.count
#아직 풀지못함