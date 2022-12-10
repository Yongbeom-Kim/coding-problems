// WIth math
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ones = 0;
        while (n) {
            ones += n%2;
            n/=2;
        }
        return ones;
    }
};

// With bit manipulation
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ones = 0;
        while (n) {
            ones += n & 1;
            n >>= 1;
        }
        return ones;
    }
};