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
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0;
        queue<TreeNode*>qe;
        qe.push(root);
        int depth=1;
        while(!qe.empty()){
            int n=qe.size();
            while(n--){
                TreeNode*curr=qe.front();
                qe.pop();
                if(curr->left==NULL&&curr->right==NULL){
                    return depth;
                }
                if(curr->left!=NULL)qe.push(curr->left);
                if(curr->right!=NULL)qe.push(curr->right);
                // depth++;
            }
            depth++;
        }
        return depth;
    }
};