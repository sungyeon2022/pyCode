from collections import deque
def solution(begin, target, words):
    answer = 0
    if target not in words:
        return 0
    q = deque()
    q.append([begin,0])
    while q:
        idx,cnt=q.popleft()
        if idx == target:
            return cnt
        for i in range(len(words)):
            diff = 0
            word = words[i]
            for j in range(len(idx)):
                if idx[j] != word[j]:
                    diff+=1
            if diff==1:
                q.append([word,cnt+1])
    return 0



a = "hit"
b= "cog"
c= ["hot", "dot", "dog", "lot", "log", "cog"]

solution(a,b,c)