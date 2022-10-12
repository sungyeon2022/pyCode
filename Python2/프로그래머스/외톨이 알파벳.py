def solution(input_string):
    answer = set()
    stack = []
    for i in range(len(input_string)):
        if input_string[i] not in stack:
            stack.append(input_string[i])
        else:
            if stack[-1]!=input_string[i]:
                stack.append(" ")
                answer.add(input_string[i])

    return ''.join(sorted(answer)) if answer else 'N'

a="zbzbz"
print(solution(a))