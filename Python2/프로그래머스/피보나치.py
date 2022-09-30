def solution(n):
    idx = dict()
    idx[0],idx[1] = 0,1
    for i in range(2,n+1):
        idx[i]=idx[i-1]+idx[i-2]
    return idx[n]