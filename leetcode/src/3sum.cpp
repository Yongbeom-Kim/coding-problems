/*
    Solution 1: using a hashmap
*/
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> map;
        vector<vector<int>> result;

        int N = nums.size();

        for(int i = 0; i < N ; i++) {
            map[nums[i]] = i;
        }

        for (int i = 0; i < N-2; i ++) {
            if (i != 0 && nums[i-1] == nums[i]) continue;
            int a = nums[i];

            for(int j = i+1; j < N; j ++) {
                if (j != i+1 && nums[j-1] == nums[j]) continue;
                int b = nums[j];
                int c = -a-b;


                if (map.find(c) != map.end() && map[c] > j) {
                    result.push_back({a,b,c});
                }
            }
        }

        return result;
    }
};