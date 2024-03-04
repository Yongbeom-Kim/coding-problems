// Include all necessary imports
#include <vector>
#include <deque>
#include <tuple>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // First number is index, second number is value
        deque<pair<int, int>> stack; 
        vector<int> result;
        
        for (int i = 0; i < nums.size(); i ++) {
            int num = nums[i];
            // Shift front of max window
            while (stack.size() > 0 && get<1>(stack[stack.size()-1]) < num) {
                stack.pop_back();
            }
            stack.push_back(make_pair(i, num));
            // Shift back of max window
            if (get<0>(stack[0]) == i-k) {
                stack.pop_front();
            }
            // Get max of new window
            if (i >= k-1)
                result.push_back(get<1>(stack[0]));

        }
        return result;
    }
};