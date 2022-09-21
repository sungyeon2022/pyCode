def solution(absolutes, signs):
    answer = 0
    for i in range(len(absolutes)):
        if signs[i] == False:
            answer += (absolutes[i]*-1)
        else:
            answer += absolutes[i]
    return answer

num = [1,3,4,5,6]
sign=[True,False,False,False,False,False,]
print(solution(num,sign))