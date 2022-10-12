class Solution(object):
    def numIslands(self, grid):
        ans = 0
        queue = []
        dx = [1,-1,0,0]
        dy = [0,0,1,-1]
        xlen = len(grid[0])
        ylen = len(grid)
        for i in range(ylen):
            for j in range(xlen):
                if grid[i][j]=="1":
                    ans+=1
                    grid[i][j] = "0"
                    queue.append([j,i])
                    while queue:
                        print(grid)
                        x,y = queue.pop(0)
                        for d in range(4):
                            nx = x+dx[d]
                            ny = y+dy[d]
                            if nx<0 or nx>=xlen or ny<0 or ny>=ylen:continue
                            if grid[ny][nx]=="0":continue
                            if grid[ny][nx]=="1":
                                grid[ny][nx] = "0"
                                queue.append([nx,ny])

        print(ans)
        return ans

sol = Solution()
a = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
sol.numIslands(a)



