from collections import deque

def solution(s):
    answer = 0
    def check(li):
        st = []
        for c in s:
            if c == '(' or c == '[' or c == '{':
                st.append(c)
            else:
                if not st:
                    return False
                x = st.pop()
                if c == '}' and x != '(':
                    return False
                elif c == '}' and x != '[':
                    return False
                elif c == '}' and x != '{':
                    return False
        return len(st) == 0
    s=deque(s)
    for x in range(len(s)):
        s.rotate(-1)
        if check(s):
            answer+=1
    return answer