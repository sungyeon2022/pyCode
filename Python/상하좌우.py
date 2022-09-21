def check(a):
    if a=="d":
        n[0]+=1
    if a=="l":
        n[1]-=1
    if a=="r":
        n[1]+=1
    if a=="u":
        n[0]-=1
n=[1,1]
a=int(input())
print(a)
k=list(input().split())
for i in k:
    check(i)
    if n[0]==0:
        n[0]+=1
    if n[1]==0:
        n[1]+=1
    if n[0]==6:
        n[0]-=1
    if n[1]==6:
        n[1]-=1
print(n)





