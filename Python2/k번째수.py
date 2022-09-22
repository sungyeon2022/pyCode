def solution(array, commands):
    answer = []
    for a,b,c in commands:
        if a==b:
            answer.append(array[a-1])
            continue
        chk = array[a-1:b]
        chk = sorted(chk)
        print(chk)
        answer.append(chk[c-1])
    return answer

print(solution([1, 5, 2, 6, 3, 7, 4],[[2, 5, 3], [4, 4, 1], [1, 7, 3]]))