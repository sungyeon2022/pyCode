def solution(nums, target):
    answer = 0
    n=len(nums)
    queue = [[nums[0],0],[-1*nums[0],0]]
    while queue:
        temp, idx = queue.pop()
        idx+=1
        if idx<n:
            queue.append([temp+nums[idx],idx])
            queue.append([temp-nums[idx],idx])
        else:
            if temp==target:
                answer+=1
    return answer



a=[1,1,1,1,1,1]
b=3
print(solution(a,b))