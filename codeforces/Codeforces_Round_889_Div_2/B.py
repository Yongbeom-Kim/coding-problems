def solve():
    n = int(input())
    for i in range(1,n+20):
        if ((n%i) != 0):
            print(i-1)
            break

TC = int(input())

for _ in range(TC):
    solve()