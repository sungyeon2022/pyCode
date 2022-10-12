def solution(ability):
    num_student = len(ability)
    num_sport = len(ability[0])

    memo = [None] * (1 << num_student)

    def solve(selected: int, sport: int) -> int:
        # sport = selected.bit_count()  # 3.10+
        if sport == num_sport:
            return 0
        if memo[selected] is None:
            max_score = 0
            for student in range(num_student):
                if selected & (1 << student):
                    continue
                score = ability[student][sport] + solve(selected | (1 << student), sport + 1)
                if score > max_score:
                    max_score = score
            memo[selected] = max_score
        return memo[selected]

    return solve(0, 0)



a=[[40, 10, 10], [20, 5, 0], [30, 30, 30], [70, 0, 70], [100, 100, 100]]
solution(a)