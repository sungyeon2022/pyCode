def solution(n, computers):
    answer = 0
    visited = [False for i in range(n)]
    for com in range(n):
        if visited[com] == False:
            DFS(n, computers, com, visited)
            answer += 1  # DFS로 최대한 컴퓨터들을 방문하고 빠져나오게 되면 그것이 하나의 네트워크.
    return answer

def DFS(n, computers, com, visited):
    visited[com] = True
    for connect in range(n):
        if connect != com and computers[com][connect] == 1:  # 연결된 컴퓨터
            if visited[connect] == False:
                DFS(n, computers, connect, visited)



def mycode(n,coms):
    visit = [False for i in range(n)]
    ans = 0
    for com in range(n):
        if visit[com] == False:
            BFS(n,coms,com,visit)
            ans += 1
    return ans
def BFS(n,coms,com,visit):
    visit[com] = True
    queue = []
    queue.append(com)
    while queue:
        com = queue.pop(0)
        visit[com] = True
        for connect in range(n):
            if connect != com and coms[com][connect]==1:
                if visit[connect]==False:
                    queue.append(connect)

a=3
b=[[1,1,1],[1,1,1],[1,1,1]]

print(mycode(a,b))