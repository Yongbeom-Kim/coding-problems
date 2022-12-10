class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0; 
        for (auto it = nums.begin(); it != nums.end(); it++) {
            x ^= (*it);
        }
        return x;
    }
};