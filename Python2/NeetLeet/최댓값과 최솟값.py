def solution(s):
    ans = list(s.split(' '))
    res = []
    for i in ans:
        res.append(int(i))
    ans.clear()
    ans += str(min(res))
    ans += " "
    ans += str(max(res))
    answer = ''.join(ans)
    return answer


a = '1 2 4 5'
solution(a)