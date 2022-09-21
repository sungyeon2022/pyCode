n,m=map(int,input().split())
re=[]
print(n)
for i in range(n):
    k=list(map(int,input().split()))
    print(min(k))
    re.append(min(k))

print(max(re))