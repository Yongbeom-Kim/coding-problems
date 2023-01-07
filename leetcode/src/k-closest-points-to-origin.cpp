/*
    Solution 1: Custom Sort
*/
#include <algorithm>
#include <iterator>
using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(), points.end(), [](vector<int>& p1, vector<int>& p2) {
            return (p1[0]*p1[0] + p1[1]*p1[1]) < (p2[0]*p2[0] + p2[1]*p2[1]);
        });

        vector<vector<int>> result (points.begin(), next(points.begin(), k));
        return result;
    }
};

/*
    Solution 2: Heap
*/
#include <algorithm>
#include <iterator>
#include <tuple>
#include <queue>
using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        auto cmp = [](tuple<double, vector<int>> t1, tuple<double, vector<int>> t2) {
                return get<0>(t1) > get<0>(t2);
            };
        priority_queue<tuple<double, vector<int>>, vector<tuple<double, vector<int>>>, decltype(cmp)> minq(cmp);

        for (vector<int> point: points) {
            minq.push(make_tuple(point[0]*point[0]+point[1]*point[1], point));
        }

        vector<vector<int>> result;

        for (int i = 0; i < k; i ++) {
            result.push_back(get<1>(minq.top()));
            minq.pop();
        }

        return result;
    }
};