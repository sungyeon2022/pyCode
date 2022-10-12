from collections import deque
def solution1(numbers, target):
    answer = 0
    queue = deque()
    n = len(numbers)
    queue.append([numbers[0], 0])
    queue.append([-1 * numbers[0], 0])
    while queue:
        temp, idx = queue.popleft()
        idx += 1
        if idx < n:
            queue.append([temp + numbers[idx], idx])
            queue.append([temp - numbers[idx], idx])
        else:
            if temp == target:
                answer += 1
    return answer
def solution2(numbers, target):
    answer = 0
    queue = [[numbers[0], 0], [-1 * numbers[0], 0]]
    n = len(numbers)
    while queue: #dfs의 재귀순환과 같은 역할
        temp, idx = queue.pop()
        idx += 1
        if idx < n:
            queue.append([temp + numbers[idx], idx])
            queue.append([temp - numbers[idx], idx])
        else:
            if temp == target:
                answer += 1
    return answer
def solution(numbers, target):
    n = len(numbers)
    answer = 0

    def dfs(idx, result):
        if idx == n:
            if result == target:
                nonlocal answer
                answer += 1
            return
        else:
            dfs(idx + 1, result + numbers[idx])
            dfs(idx + 1, result - numbers[idx])
    dfs(0, 0)
    return answer

def mycode(num,tar):
    ans = 0
    queue = [[num[0],0],[-1*num[0],0]]
    n=len(num)
    while queue:
        temp, idx = queue.pop()
        idx += 1
        if idx<n:
            queue.append([temp + num[idx], idx])
            queue.append([temp - num[idx], idx])
        else:
            print(temp)
            if temp == tar:
                ans += 1
    return ans

a = [1, 1, 1, 1, 1]
b = 3

print(mycode(a,b))