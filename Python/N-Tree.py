import collections

class Solution:
    def levelOrder(self, root: 'Node') -> list[list[int]]:
        def walk(x):
            q = collections.deque()
            q.append(x)
            while q:
                t=[]
                for i in range(len(q)):
                    x=q.popleft()
                    t.append(x.val)
                    for c in x.children:
                        q.append(c)
                A.append(t)
        A=[]
        if root:
            walk(root)

        return A