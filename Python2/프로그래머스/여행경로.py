def solution(tickets):
    answer = set()
    for i in tickets:
        for j in i:
            answer.add(j)
    return list(sorted(answer))

a=[["ICN", "JFK"], ["HND", "IAD"], ["JFK", "HND"]]
print(solution(a))