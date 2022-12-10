C = {
    "I": 1,
    "V": 5,
    "X": 10,
    "L": 50,
    "C": 100,
    "D": 500,
    "M": 1000
}

class Solution:
    def romanToInt(self, s: str) -> int:
        total: int = 0;
        current: int = 0;
        for c in s:
            if (C[c] <= current):
                total += current
                current = C[c]
            else:
                current = C[c] - current
        return total + current;
        