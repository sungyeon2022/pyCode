from collections import deque


class Solution(object):
    def cloneGraphdfs(self, node):
        New = {}

        def dfs(node):
            if node in New: return New[node]
            copy = Node(node.val)
            New[node] = copy
            for nei in node.neighbors:
                copy.neighbors.append(dfs(nei))
            return copy
        return dfs(node) if node else None

    def cloneGraphbfs(self, node):
        if not node:    return node
        deq = deque([node])
        nodes = {node.val: Node(node.val)}

        while deq:
            poped = deq.popleft()
            cur = nodes[poped.val]

            for neigh in poped.neighbors:
                if neigh.val not in nodes:
                    nodes[neigh.val] = Node(neigh.val)
                    deq.append(neigh)

                cur.neighbors.append(nodes[neigh.val])

        return nodes[node.val]


adjList = [[2, 4], [1, 3], [2, 4], [1, 3]]
sol = Solution()
print(sol.cloneGraphbfs(adjList))