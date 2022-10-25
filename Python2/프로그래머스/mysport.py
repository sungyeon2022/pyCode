def solution(ability):
    num_student = len(ability)
    num_sport = len(ability[0])

    def solve(selected):
        sport = len(selected)
        if sport == num_sport:
            return 0
        max_score = 0
        for student in range(num_student):
            if student not in selected:
                selected.append(student)
                score = ability[student][sport] + solve(selected)
                selected.pop()
                if score > max_score:
                    max_score = score
        return max_score

    return solve([])

def mysolution(ability):
    stuend,abiend = len(ability),len(ability[0])

    def sol(sel):
        sellen=len(sel)
        if sellen==abiend: return 0
        max_sc = 0
        for stu in range(stuend):
            if stu not in sel:
                sel.append(stu)
                print(sel)
                sc = ability[stu][sellen] + sol(sel)
                sel.pop()
                if sc > max_sc:
                    max_sc = sc
        return max_sc
    return sol([])





a=[[40, 10, 10], [20, 5, 0], [30, 30, 30], [70, 0, 70], [100, 100, 100]]
mysolution(a)