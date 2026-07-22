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
 int dfs(TreeNode* root,int &cnt){
    if(root==NULL){
        return 1;
    }
    int l=dfs(root->left,cnt);
    int r=dfs(root->right,cnt);
    if(l==-1 || r==-1){
        cnt++;
        return 0;
    }
    if(l==0 || r==0){
        return 1;
    }
    return -1;
 }
class Solution {
public:
    int minCameraCover(TreeNode* root) {
        int cnt=0;
        if(dfs(root,cnt)==-1){
            return cnt+1;
        }
        else{
            return cnt;
        }
    }
};