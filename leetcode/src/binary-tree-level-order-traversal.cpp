/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == nullptr) {
            return {};
        }
        vector<vector<int>> result;

        vector<TreeNode*> frontier {root};

        while (frontier.size() != 0) {
            vector<TreeNode*> newFrontier;
            result.push_back({});
            for (TreeNode* node : frontier) {
                result[result.size()-1].push_back(node->val);

                if (node->left != nullptr) {
                    newFrontier.push_back(node -> left);
                }
                if (node->right != nullptr) {
                    newFrontier.push_back(node -> right);
                }
                
            }

            frontier = std::move(newFrontier);
        }

        return result;
    }
};