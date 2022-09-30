def solution(n):
    arr = list(map(int,str(n)))
    arr = sorted(arr,reverse=True)
    ans = arr[0]
    for i in range(1,len(arr)):
        ans = ans*10+arr[i]
    return ans

print(solution(118372))