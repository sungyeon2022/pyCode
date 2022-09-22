a, b = map(int, input().strip().split(' '))
res = ""
for i in range(b):
    for j in range(a):
        res+="*"
    res+="\n"
print(res)