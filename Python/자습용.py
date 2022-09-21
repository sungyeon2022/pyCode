from collections import deque

def solution(queue1, queue2):
    target_sum = (sum(queue1) + sum(queue2)) // 2
    left_sum = sum(queue1)
    queue1 = deque(queue1)
    queue2 = deque(queue2)

    answer = 0
    while queue1 and queue2:
        if left_sum < target_sum:
            tmp = queue2.popleft()
            left_sum += tmp
            queue1.append(tmp)
            answer += 1
        elif left_sum > target_sum:
            left_sum -= queue1.popleft()
            answer += 1
            print(queue1)
            print(queue2)
        else:
            return answer

    else:
        return -1

a={2,5,6,4,8,6}
b={3,4,3,3,3,3}
solution(a,b)
