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
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>qw;
        qw.push(root);
        while(!qw.empty()){
            int size=qw.size();
            vector<int>level;
            for(int i=0;i<size;i++){
            TreeNode*node=qw.front();
            qw.pop();
            if(node->left!=NULL)qw.push(node->left);
            if(node->right!=NULL)qw.push(node->right);
            level.push_back(node->val);
            // TreeNode*
        }
        ans.push_back(level);
        }
        return ans;
    }
};