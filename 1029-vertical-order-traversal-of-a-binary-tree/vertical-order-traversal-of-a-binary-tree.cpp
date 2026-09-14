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
vector<vector<int>> verticalTraversal(TreeNode* root) {
    vector<vector<int>> ans;

    if(root == NULL)
        return ans;

    map<int, map<int, multiset<int>>> mp;

    // node, row, column
    queue<tuple<TreeNode*, int, int>> q;

    q.push({root, 0, 0});

    while(!q.empty()) {
        auto [curr, row, col] = q.front();
        q.pop();

        mp[col][row].insert(curr->val);

        if(curr->left != NULL) {
            q.push({curr->left, row + 1, col - 1});
        }

        if(curr->right != NULL) {
            q.push({curr->right, row + 1, col + 1});
        }
    }

    // column
    for(auto colPair : mp) {
        vector<int> temp;

        // row
        for(auto rowPair : colPair.second) {

            // values
            for(auto value : rowPair.second) {
                temp.push_back(value);
            }
        }

        ans.push_back(temp);
    }

    return ans;
}
};