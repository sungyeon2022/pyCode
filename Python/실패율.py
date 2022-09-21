def solution(N, stages):
    answer = []
    dj = len(stages)
    nan = {}
    for i in range(1,N+1):
        nan[i]=stages.count(i)/dj
        dj-=stages.count(i)
    chk = sorted(nan.items(), key=lambda item: item[1],reverse=True)
    res=list()
    for i in chk:
        res.append(i[0])
    print(res)

a=5
n=[2, 1, 2, 6, 2, 4, 3, 3]
solution(a,n)
