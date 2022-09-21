import math
def jin(a,b):
    word = ""
    while a:  # 숫자를 k진법으로 변환
        word += str(a % b)  # 저장 하면서 역순 저장
        a = a // b
    return word
def solution(n):
    res=0
    ans = jin(n,3)
    res = int(ans,3)
    return res
print(solution(45))