def solution(numbers):
    answer = 0
    new = [0,1,2,3,4,5,6,7,8,9]
    set(new)
    for i in numbers:
        new.remove(i)
    answer = sum(set(new))
    return answer