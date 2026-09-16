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

TreeNode*solve(string&s,int& i,int depth){
    int n=s.size();
    if(i>=n){
        return NULL;
    }
    int j=i;
    while(j<n&&s[j]=='-'){
        j++;
    }
    int desh=j-i;
    if(depth!=desh){
        return NULL;
    }
    i+=desh;
    int num=0;
    while(i<n&&isdigit(s[i])){
        num=(num*10)+(s[i]-'0');
        i++;
    }
    TreeNode*newnode=new TreeNode(num);
    newnode->left=solve(s,i,depth+1);
    newnode->right=solve(s,i,depth+1);
    return newnode;
}
    TreeNode* recoverFromPreorder(string traversal) {
        // int n=traversal.size();
        int i=0;
        // int depth=0;
       return solve(traversal,i,0);
    }
};