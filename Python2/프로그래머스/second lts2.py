# def solution(n):
#     answer = 1
#     for i in range(1,n):
#         ind = 0
#         for j in range(i,n):
#             ind += j
#             if ind==n:
#                 print(j)
#                 answer+=1
#                 continue
#             elif ind>n:
#                 continue
#     return answer
def solution(n):
    return len([i for i in range(1,n+1,2) if n % i == 0])
solution(15)