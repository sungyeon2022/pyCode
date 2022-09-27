def solution(brown, yellow):
    answer = []
    def getMyDivisor(n):
        divisorsList = []
        for i in range(1, int(n ** (1 / 2)) + 1):
            if (n % i == 0):
                divisorsList.append(i)
                if ((i ** 2) != n):
                    divisorsList.append(n // i)
        divisorsList.sort(reverse=True)
        return divisorsList
    hap = brown+yellow
    su = getMyDivisor(hap)
    for i in su:
        col = hap//i
        if brown == (i+col)*2-4:
            answer = [i,col]
            break
    return answer

print(solution(8,1))