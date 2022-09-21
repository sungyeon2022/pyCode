def count(a):
    cou = 0
    for i in range(1,a+1):
        if a%i==0:
            cou+=1
    if cou%2==0:
        return True
    else:
        return False
def solution(left, right):
    answer = 0
    for i in range(left,right+1):
        if count(i):
            answer += i
        else:
            answer -= i
    return answer

print(solution(13,17))