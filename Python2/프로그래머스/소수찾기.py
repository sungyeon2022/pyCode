from itertools import combinations
def solution(nums):
    answer = 0
    def sosu(a):
        if a==0 or a==1:
            return False
        for i in range(2,int(a*0.5)+1):
            if a % i == 0:
                return False
        return True
    for i in combinations(nums,3):
        if sosu(sum(i)):
            answer+=1
    return answer


a=[1,2,3,4]
solution(a)