class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int L = nums.size();
        int pos = 0;
        int zeros = 0;
        for(int i = 0; i < L; i ++) {
            if (nums[i] == 0){
                zeros ++;
            } else {
                swap(nums[i], nums[pos]);
                pos++;
            }
        }
        std::fill(nums.begin()+pos, nums.end(), 0);
    }
};