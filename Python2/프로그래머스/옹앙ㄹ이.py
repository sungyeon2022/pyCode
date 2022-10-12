def solution(babbling):
    answer = 0
    can = ['aya','ye','woo','ma']
    for i in babbling:
        for j in can:
            if j+j in i:
                break
            else:
                i = i.replace(j,'').strip()
        if i:
            continue
        else:
            answer +=1
    return answer

a=["aya", "yee", "u", "maa"]
solution(a)