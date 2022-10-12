def solution(d, budget):
    ans = 0
    idx = 0
    d = sorted(d)
    for i in d:
        if idx+i<=budget:
            idx+=i
            ans+=1
        else:
            break

    return ans

a= [1,3,2,5,4]
b=9
print(solution(a,b))