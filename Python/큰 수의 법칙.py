n,m,k=map(int,input().split())
print(n)
li=list(map(int,input().split()))
re=max(li)*(m-(m%k))
li.remove(max(li))
re+=max(li)*(m%k)

print(re)