n=int(input())
o=0
m=0
s=0
count=0
for i in range((n+1)*3600):
    if s==60:
        s=0
        m+=1
    if m==60:
        m=0
        o+=1
    if '3' in str(o) or '3' in str(m) or '3' in str(s):
       count+=1
    s+=1
print(count)
