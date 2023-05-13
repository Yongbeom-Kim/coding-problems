class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        N = len(nums)
        result = []

        def helper(index, solution):
            if (index == N-1):
                result.append(solution.copy())

            for i in range(index, N):
                solution[i], solution[index] = solution[index], solution[i]
                helper(index+1, solution)
                solution[i], solution[index] = solution[index], solution[i]

        helper(0, nums)
        return result
