#include <queue>
#include <vector>
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        using namespace std;
        int visited = 0;
        vector<vector<int>> adjList (numCourses, vector<int>());
        int inDegree[numCourses];
        queue<int> q;

        for (int i = 0; i < numCourses; i ++) {
            inDegree[i] = 0;
        }

        for (auto it = prerequisites.begin(); it != prerequisites.end(); it++) {
            vector<int> edge = *it;
            adjList[edge[1]].push_back(edge[0]);
            inDegree[edge[0]]++;
        }

        for (int i = 0; i < numCourses; i ++) {
            if (inDegree[i] == 0) {
                q.push(i);
            }
        }

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            visited ++;

            vector<int> neighbours = adjList[node];
            for (auto it = neighbours.begin(); it != neighbours.end(); it ++) {
                int neighbour = (*it);
                inDegree[neighbour] --;
                if (inDegree[neighbour] == 0) {
                    q.push(neighbour);
                }
            }
        }

        return (visited == numCourses);
    }
};