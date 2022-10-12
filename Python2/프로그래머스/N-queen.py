def solution(n):
    cases = [0] # shallow copy of the cases (list)
    def dfs(queens, next_queen):
        # column check
        if next_queen in queens:
            return

        # diagonal check
        for row, column in enumerate(queens):
            h = len(queens) - row
            if next_queen == column + h or next_queen == column - h:
                return

        queens.append(next_queen)
        # end check
        if len(queens) == n:
            print(queens)
            cases[0] += 1
            return

        for next_queen in range(n):
            dfs(queens[:], next_queen) # deep copy of queens

    for next_queen in range(n):
        queens = []
        dfs(queens, next_queen)
    print(cases[0])
    return cases[0]

solution(4)