/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

#include <queue>
#include <unordered_map>
#include <iostream>
class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (node == nullptr) {
            return nullptr;
        }
        
        using namespace std;

        unordered_map<int, Node*> visited;
        queue<Node*> q;

        auto getNodeCopy = [&visited](int val) {
            if (visited.find(val) == visited.end()) {
                visited[val] = new Node(val);
            }

            return visited[val];
        };

        q.push(node);

        while (!q.empty()) {
            Node* curr_node = q.front();
            
            q.pop();
            Node* copy_node = getNodeCopy(curr_node->val);

            for (auto it = (curr_node->neighbors).begin(); it != (curr_node->neighbors).end(); it ++) {
                Node* neighbor = *it;
                
                if (visited.find(neighbor->val) == visited.end()) {
                    q.push(neighbor);
                }

                Node* neighbor_copy = getNodeCopy(neighbor->val);

                (copy_node->neighbors).push_back(neighbor_copy);
            }
        }

        return visited[node->val];
    }
};