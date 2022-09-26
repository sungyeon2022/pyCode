def solution(citations):
    citations.sort(reverse=True)
    for idx, val in enumerate(citations):
        if idx >= val:
            return val
    return len(citations)