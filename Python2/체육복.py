def solution(n, lost, reserve):
    answer = 0
    if len(lost)<=len(reserve):
        return n
    else:
        print(len(lost+reserve)-len(set(lost+reserve)))
        return n-len(lost)+len(reserve)-(len(lost+reserve)-len(set(lost+reserve)))
print(solution(5,[3,2,5],[3,2]))