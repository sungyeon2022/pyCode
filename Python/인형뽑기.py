def solution(board, moves):
    ind = []
    answer = 0

    for a in moves:
        for i in range(len(board)):
            if board[i][a-1] != 0:
                ind.append(board[i][a-1])
                board[i][a - 1] = 0
            if len(ind) > 1:
                if ind[-1] == ind[-2]:
                    ind.pop(-1)
                    ind.pop(-1)
                    answer += 2
            break
    return answer
a = [[0,0,0,0,0],[0,0,1,0,3],[0,2,5,0,1],[4,2,4,4,2],[3,5,1,3,1]]
b = [1,5,3,5,1,2,1,4]
solution(a,b)
