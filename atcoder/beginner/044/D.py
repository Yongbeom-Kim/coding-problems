from math import sqrt

def soln(n: int, s: int) -> int:
    if s > n:
        return -1
    if s == n:
        return n + 1
    
    def f(b, n):
        result = 0
        while n > 0:
            result += n % b
            n //= b
        return result
    
    sqrt_n = int(sqrt(n)) + 1

    # Check for bases in the range [2, sqrt(n) + 1]
    for b in range(2, sqrt_n + 1):
        if f(b, n) == s:
            return b


    # Check for bases in the range (sqrt(n), n]
    for p in range(sqrt_n + 1, 0, -1):
        if (n - s) % p != 0:
            continue
        b = (n - s) // p + 1
        if f(b, n) == s:
            return b
    
    return -1
    

# Read input
n = int(input())
s = int(input())

# Print the solution
print(soln(n, s))
