# from collections import deque
# def solution(bridge_length, weight, truck_weights):
    # answer = 0
    # truck_weights = deque(truck_weights)
    # while truck_weights:
    #     answer += 1
    #     ing = []
    #     ing.append(truck_weights.popleft())
    #     while weight > sum(ing) and truck_weights:
    #         ing.append(truck_weights.popleft())
    #         answer+=1
    #     answer+=bridge_length
    #
from collections import deque


def solution(bridge_length, weight, truck_weights):
    time = 0
    q = [0] * bridge_length
    print(q)
    while q:
        time += 1
        q.pop(0)
        if truck_weights:
            if sum(q) + truck_weights[0] <= weight:
                q.append(truck_weights.pop(0))
            else:
                q.append(0)
    return time


# 오히려 deque 이용시 TLE유발 가능



print(solution(2,10,[7,4,5,6]))