from itertools import combinations_with_replacement
def solution(n, info):
    answer = [-1]
    mg = -1
    for com in combinations_with_replacement(range(11),n):
        in2=[0]*11
        for i in com:
            in2[10-i]+=1
        ape,lio = 0,0
        for idx in range(11):
            if info[idx] == in2[idx] == 0:
                continue
            elif info[idx] >= in2[idx]:
                ape += 10-idx
            else:
                lio += 10-idx
        if lio > ape:
            gap = lio - ape
            if gap > mg:
                mg = gap
                answer = in2
    return answer