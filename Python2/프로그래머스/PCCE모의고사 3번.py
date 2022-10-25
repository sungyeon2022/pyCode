def get_gene1(pose):
    n, p = pose
    stack = []

    p -= 1
    while n > 1:
        stack.append(p % 4)
        n -= 1
        p //= 4

    while len(stack) > 0:
        num = stack.pop()
        if num == 0: return 'RR'
        if num == 3: return 'rr'
    return 'Rr'
def solution1(queries):
    return [*map(get_gene1, queries)]


def get_gene2(pose):
    n, p = pose
    if n == 1: return 'Rr'

    mother_gene = get_gene2((n - 1, (p - 1) // 4 + 1))
    case = ('RR', 'Rr', 'Rr', 'rr')

    if mother_gene == 'Rr':
        return case[p % 4 - 1]
    else:
        return mother_gene


def solution2(queries):
    return [*map(get_gene2, queries)]


def get_gene3(pose):
    n, p = pose
    p -= 1

    bound = 1 << ((n - 1) << 1)
    xand_p = (p + bound) ^ (~(p >> 1) + bound)
    mask = (bound - 1) // 3

    check_gene = xand_p & mask

    if check_gene == 0: return 'Rr'

    i = 1
    while check_gene > 1:
        check_gene >>= 1
        i <<= 1 # stack에서 이용한 방법과 다르지 않음

    if p & i:
        return 'rr'
    else:
        return 'RR'


def solution3(queries):
    return [*map(get_gene3, queries)]


a=[[3, 12], [2, 2]]
print(solution1(a))


