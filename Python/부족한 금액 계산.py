def solution(price, money, count):
    ind = 0
    for i in range(1,count+1):
        ind += price*i
    if money - ind > 0:
        return 0
    else :
        return ind-money


print(solution(3,20,4))