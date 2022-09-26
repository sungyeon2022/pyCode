from collections import deque
def solution(prices):
    answer = []
    qu = deque(prices)
    while qu:
        pri = qu.popleft()
        sec = 0
        for q in qu:
            sec += 1
            if pri > q:
                break
        answer.append(sec)
    return answer

print(solution([1,2,3,2,3]))