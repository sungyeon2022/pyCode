def solution(n, lost, reserve):
    ls = set(lost)-set(reserve)
    rs = set(reserve)-set(lost)
    for i in rs:
        if i-1 in ls:   
            ls.remove(i-1)
        elif i+1 in ls:
            ls.remove(i+1)
    return n-len(ls)