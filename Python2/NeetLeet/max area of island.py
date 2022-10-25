from typing import List
class Solution:
    def maxAreaOfIslandbfs(self, grid: List[List[int]]) -> int:
        ans = 0
        queue = []
        dx = [1,-1,0,0]
        dy = [0,0,1,-1]
        xend = len(grid[0])
        yend = len(grid)
        for i in range(yend):
            for j in range(xend):
                if grid[i][j] == 1:
                    idx = 0
                    queue.append([j,i])
                    while queue:
                        idx += 1
                        x,y = queue.pop(0)
                        for d in range(4):
                            nx = x+dx[d]
                            ny = y + dy[d]
                            if nx < 0 or nx >= xend or ny < 0 or ny>=yend:continue
                            if grid[ny][nx] == 0 : continue
                            if grid[ny][nx] == 1:
                                grid[ny][nx] = 0
                                queue.append([nx,ny])
                    if idx>1: idx -= 1
                    ans = max(ans,idx)
        print(ans)
        return ans
    def solutionDFS(self, grid: List[List[int]]) -> int:
        ROWS, COLS = len(grid), len(grid[0])
        visit = set()
        def dfs(r, c):
            if (
                    r < 0
                    or r == ROWS
                    or c < 0
                    or c == COLS
                    or grid[r][c] == 0
                    or (r, c) in visit
            ):
                return 0
            visit.add((r, c))
            return 1 + dfs(r + 1, c) + dfs(r - 1, c) + dfs(r, c + 1) + dfs(r, c - 1)

        area = 0
        for r in range(ROWS):
            for c in range(COLS):
                area = max(area, dfs(r, c))
        return area

a= [[0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0],
    [0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0],
    [0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0],
    [0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0],
    [0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0]]

sol = Solution()
sol.maxAreaOfIslandbfs(a)
