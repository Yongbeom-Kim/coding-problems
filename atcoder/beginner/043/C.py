N = int(input())

numbers = list(map(int, input().split()))

min_n = min(numbers)
max_n = max(numbers)

min_cost = float('inf')
for final_number in range(min_n, max_n+1):
    cost = 0
    for number in numbers:
        cost += (number - final_number)**2
    min_cost = min(min_cost, cost)

print(min_cost)