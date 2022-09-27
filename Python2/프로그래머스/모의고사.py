def solution(answers):
    su1 = [1, 2, 3, 4, 5]
    su2 = [2, 1, 2, 3, 2, 4, 2, 5]
    su3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]

    cnt = [0,0,0]

    for i in range(len(answers)):
        if answers[i]==su1[i%5]:
            cnt[0] += 1
        if answers[i]==su2[i%8]:
            cnt[1] += 1
        if answers[i]==su3[i%10]:
            cnt[2] += 1
    maxc = max(cnt)
    ans = []
    for i in range(3):
        if cnt[i]==maxc:
           ans.append(i+1)
    return ans