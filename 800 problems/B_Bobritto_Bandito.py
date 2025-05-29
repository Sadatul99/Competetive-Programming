def solve(test_cases):
    for n, m, l, r in test_cases:
        center = (l + r) // 2
        l_prime = center - m // 2
        r_prime = l_prime + m
        print(l_prime, r_prime)

# Input Reading
t = int(input())
test_cases = []
for _ in range(t):
    n, m, l, r = map(int, input().split())
    test_cases.append((n, m, l, r))

solve(test_cases)
