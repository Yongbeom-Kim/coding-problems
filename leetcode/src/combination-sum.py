class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        result = []

        def helper(target, solution, min_cand_index):
            if (target == 0):
                result.append(solution.copy())

            for i in range(min_cand_index, len(candidates)):
                candidate = candidates[i]
                if (candidate <= target):
                    solution.append(candidate)
                    helper(target-candidate, solution, i)
                    solution.pop()
        helper(target, [], 0)
        return result
