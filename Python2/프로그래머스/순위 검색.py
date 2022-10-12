def solution(info, query):
     answer = []
     for i in range(len(info)):
          info[i] = info[i].split()
          print(info[i])
     for i in range(len(query)):
          query[i] = query[i].split()
          while len(query[i])>5:
               query[i].remove('and')
          print(query[i])
     for i in range(len(query)):
          ck = True

     return answer


a=["java backend junior pizza 150",
     "python frontend senior chicken 210",
     "python frontend senior chicken 150",
     "java backend junior chicken 80",
     "python backend senior chicken 50"]
b=["java and backend and junior and pizza 100",
     "python and frontend and senior and chicken 200",
     "cpp and - and senior and pizza 250",
     "- and backend and senior and - 150",
     "- and - and - and chicken 100",
     "- and - and - and - 150"]
solution(a, b)
