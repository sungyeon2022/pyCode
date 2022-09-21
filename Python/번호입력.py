def solution(numbers, hand):
    answer = ''
    left = 10
    right = 12  
    for i in numbers :
        if i==0:
            i=11
        if i%3 == 1:
            answer += 'L'
            left = i
        elif i%3 ==0 :
            answer += 'R'
            right = i
        else :
            ml = abs(i-left)
            mr = abs(i-right)
            dl = (ml//3)+(ml%3)
            dr = (mr//3)+(mr%3)
            if dl>dr :
                answer += 'R'
                right = i
            elif dl<dr :
                answer += 'L'
                left = i
            else :
                if hand =='right':
                    answer += 'R'
                    right = i
                else:
                    answer+='L'
                    left = i
    return answer

