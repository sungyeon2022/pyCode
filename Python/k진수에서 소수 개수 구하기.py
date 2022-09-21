def solution(n, k):
    jin = ''
    while n > 0:
        n, mod = divmod(n, k)
        jin += str(mod)
    jin = jin[::-1] #뒤집는 처리과정
    chk = ''
    answer = 0
    for i in jin:
        if i != 0:
            chk += i
        else:
            sosu = int(chk)
            if sosu==2:
                answer+=1
                chk=''
            elif sosu > 2:
                for k in range(2,sosu):
                    if sosu%k==0:
                        break
                    elif k==sosu-1:
                        answer+=1
                        chk=''
    return answer


def sol(n, k):
    word = ""
    while n:  # 숫자를 k진법으로 변환
        word = str(n % k) + word #저장 하면서 역순 저장
        n = n // k

    word = word.split("0")  # 변환된 숫자를 0을 기준으로 나눈다.

    count = 0
    for w in word:
        if len(w) == 0:  # 만약 0또는 1이거나 빈공간이라면 continue를 통해 건너뛴다.
            continue
        if int(w) < 2:
            continue
        sosu = True
        for i in range(2, int(int(w) ** 0.5) + 1):  # 소수찾기
            if int(w) % i == 0:
                sosu = False
                break
        if sosu:
            count += 1

    return count