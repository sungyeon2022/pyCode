def mycode(n, coms):
    ans = 0
    visit = [False for i in range(n)]
    for com in range(n):
        if visit[com] == False:
            visit[com]=True
            queue = []
            queue.append(com)
            while queue:
                com = queue.pop(0)
                visit[com]=True
                for con in range(n):
                    if con != com and coms[com][con]==1:
                        if visit[con]==False:
                            queue.append(con)
            ans+=1

    return ans




a= [[1, 1, 0], [1, 1, 0], [0, 0, 1]]
b = 3
print(mycode(b,a))