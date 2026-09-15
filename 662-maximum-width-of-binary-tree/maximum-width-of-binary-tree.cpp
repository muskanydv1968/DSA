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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;
        queue<pair<TreeNode*,long long>>q;

        q.push({root,0});
        long long maxwidth=0;
        while(!q.empty()){
            long long left= q.front().second;
            long long right=q.back().second;
            maxwidth=max(maxwidth,right-left+1);
            int n=q.size();
            while(n--){
                TreeNode*curr=q.front().first;
                long long index=q.front().second-left;
                q.pop();
                if(curr->left!=NULL){
                    q.push({curr->left,2*index+1});
                }
                if(curr->right!=NULL){
                    q.push({curr->right,2*index+2});
                }
            }

        }
        return maxwidth;
    }
};