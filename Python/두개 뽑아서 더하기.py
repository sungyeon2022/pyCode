def solution(numbers):
    answer = []
    for i in range(len(numbers)-1):
        for j in range(i+1,len(numbers)):
            answer.append(numbers[i]+numbers[j])
    ans = list(set(answer))
    return sorted(ans)

a = [2,1,3,4,1]

print(solution(a))