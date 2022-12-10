class Solution:
    def countBits(self, n: int) -> List[int]:
        import math
        v = [0]
        for i in range(math.ceil(math.log2(1 if n == 0 else n)+1)):
            add = list(map(lambda x: x+ 1, v))
            v += add

        return v[0:n+1]