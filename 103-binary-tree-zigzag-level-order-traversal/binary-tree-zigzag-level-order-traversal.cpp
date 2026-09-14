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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(root==NULL)return result ;
        queue<TreeNode*>qw;
        qw.push(root);
        int leftToRight=true;
        while(!qw.empty()){
            int n=qw.size();
            vector<int>level;
            while(n--){
                TreeNode*temp=qw.front();
                qw.pop();
                level.push_back(temp->val);
                if(temp->left!=NULL){
                    qw.push(temp->left);
                }
                if(temp->right!=NULL){
                    qw.push(temp->right);
                }

            }
            if (!leftToRight)
                 reverse(level.begin(), level.end());

                 result.push_back(level);
                 leftToRight = !leftToRight;
        }
        return result;
    }
};