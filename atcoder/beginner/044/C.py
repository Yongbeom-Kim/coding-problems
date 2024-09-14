"""
O(N^3 max(cards)) time complexity

top-down dp
"""

# from typing import List

# def solution(N: int, A: int, cards: List[int]) -> int:
#     max_sum = N * max(cards)
#     memo = [[[-1 for _ in range(max_sum + 1)] for _ in range(N + 1)] for _ in range(N + 1)]

#     def dp(j, k, s) -> int:
#         # ways to get sum s from k cards within the first j cards
#         if k == 0 and s == 0:
#             return 1
#         if j == 0:
#             return 0
#         if memo[j][k][s] != -1:
#             return memo[j][k][s]
#         if s < cards[j - 1]:
#             memo[j][k][s] = dp(j - 1, k, s)
#         else:
#             memo[j][k][s] = dp(j - 1, k, s) + dp(j - 1, k - 1, s - cards[j - 1])
#         return memo[j][k][s]

#     result = 0
#     for i in range(1, N + 1):
#         n_cards = i
#         target_sum = n_cards * A
#         if target_sum <= max_sum:
#             result += dp(N, n_cards, target_sum)
#     return result

# N, A = [int(x) for x in input().split()]
# cards = [int(x) for x in input().split()]

# print(solution(N, A, cards))


"""
O(N^3 max(cards)) time complexity

bottom-up dp
"""
# from typing import List

# def solution(N: int, A: int, cards: List[int]) -> int:
#     max_sum = N * max(cards)
#     # dp[j][k][s] = ways from first j cards, choose k cards to get sum s
#     dp = [[[0 for _ in range(max_sum + 1)] for _ in range(N + 1)] for _ in range(N + 1)]

#     for j in range(N+1):
#         dp[j][0][0] = 1

#     for j in range(1, N + 1):
#         for k in range(1, N + 1):
#             for s in range(max_sum+1):
#                 if s >= cards[j-1]:
#                     dp[j][k][s] = dp[j-1][k][s] + dp[j-1][k-1][s-cards[j-1]]
#                 else:
#                     dp[j][k][s] = dp[j-1][k][s]
    
#     result = 0
#     for k in range(1, N+1):
#         target_sum = k*A
#         if target_sum <= max_sum:
#             result += dp[N][k][target_sum]

#     return result

# N, A = [int(x) for x in input().split()]
# cards = [int(x) for x in input().split()]

# print(solution(N, A, cards))

"""
O(N^2 max(cards)) time complexity
top down dp
"""

# from typing import List

# def solution(N: int, A: int, cards: List[int]) -> int:
#     max_card = max(cards)
#     max_sum = N*(max(max_card, A))
#     cards_minus_a = [card - A for card in cards]
#     memo = [[-1 for _ in range((max_sum+1)*2)] for _ in range(N+1)]

#     def dp(j, sum): # ways to get sum from first j cards minus a
#         if j == 0 and sum == 0:
#             return 1
#         if j == 0:
#             return 0
#         if memo[j][sum + max_sum] != -1:
#             return memo[j][sum + max_sum]
#         memo[j][sum + max_sum] = dp(j-1, sum)
#         if sum-cards_minus_a[j-1] >= -max_sum and sum-cards_minus_a[j-1] <= max_sum:
#             memo[j][sum + max_sum] += dp(j-1, sum-cards_minus_a[j-1])
#         return memo[j][sum + max_sum]

        
    
#     return dp(N, 0) - 1 # -1 since we are summing to 0, so exclude no cards

# N, A = [int(x) for x in input().split()]
# cards = [int(x) for x in input().split()]

# print(solution(N, A, cards))

"""
O(N^2 max(cards)) time complexity
bottom up dp
"""

# from typing import List

# def solution(N: int, A: int, cards: List[int]) -> int:
#     max_card = max(cards)
#     max_sum = N*(max(max_card, A))
#     cards_minus_a = [card-A for card in cards]

#     memo = [[0 for _ in range(2*(max_sum + 1))] for _ in range(N+1)] # memo[j][s] = from j cards (card - a), number of ways to get sum (s - max_sum)

#     for i in range(N+1):
#         memo[i][max_sum] = 1
#     # for s in range(1, 2*(max_sum + 1)): # redundant
#     #     memo[0][s] = 0

#     for j in range(1, N+1):
#         for s in range(1, 2*(max_sum + 1)):
#             memo[j][s] = memo[j - 1][s]
#             if s - cards_minus_a[j-1] >= 0 and s - cards_minus_a[j-1] < 2*(max_sum + 1):
#                 memo[j][s] += memo[j - 1][s - cards_minus_a[j-1]]

#     return memo[N][max_sum] - 1


# N, A = [int(x) for x in input().split()]
# cards = [int(x) for x in input().split()]

# print(solution(N, A, cards))