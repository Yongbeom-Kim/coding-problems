#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>&b){
            return a[0] < b[0];
        });

        vector<vector<int>> result;
        vector<int> current_interval = intervals[0];

        for (const vector<int>& interval : intervals) {
            if (interval[0] <= current_interval[1]) {
                current_interval[1] = max(current_interval[1], interval[1]);
                continue;
            }
            result.push_back(current_interval);
            current_interval = interval;
        }
        result.push_back(current_interval);
        
        return result;
    }
};