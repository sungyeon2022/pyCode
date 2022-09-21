from collections import deque

def solution(queue1, queue2):
    answer = 0
    mid = (sum(queue1)+sum(queue2))//2
    left = sum(queue1)
    queue1 = deque(queue1)
    queue2 = deque(queue2)
    while queue1 and queue2:
        if left < mid:
            tmp = queue2.popleft()
            left += tmp
            queue1.append(tmp)
            answer += 1
        elif left > mid:
            left -= queue1.popleft()
            answer += 1
        else:
            return answer

    else:
        return -1