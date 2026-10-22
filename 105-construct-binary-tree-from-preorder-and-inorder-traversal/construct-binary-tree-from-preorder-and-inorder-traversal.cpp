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
TreeNode*solve(vector<int>&preorder,int instart,int inend,unordered_map<int,int>&mp,int& preindex){
    if(instart>inend){
        return NULL ;
    }
    int rootval=preorder[preindex++];
    TreeNode*root=new TreeNode(rootval);
    int mid=mp[rootval];
    root->left=solve(preorder,instart,mid-1,mp,preindex);
    root->right=solve(preorder,mid+1,inend,mp,preindex);
    return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        int preindex=0;
        return solve(preorder,0,inorder.size()-1,mp,preindex);
    }
};