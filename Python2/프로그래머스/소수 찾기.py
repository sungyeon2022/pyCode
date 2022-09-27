import math
import itertools
def solution(numbers):
    def sosu(x):
        if x <= 1:
            return False
        for i in range(2,int(math.sqrt(x))+1):
            if x%i==0:
                return False
        return True
    answer = 0
    res = set()
    numbers = list(map(str,numbers))
    for i in range(1,len(numbers)+1):
        ch = list(itertools.permutations(numbers,i))
        for i in range(len(ch)):
            su = int(''.join(ch[i]))
            res.add(su)
    for i in res:
        if sosu(i):
            answer += 1
    return answer


print(solution("0222151"))