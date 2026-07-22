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
    int countNodes(TreeNode* root) {
        if(root==NULL)
            return 0;
        int left_l =1;
        int right_r=1;
        TreeNode* l=root->left;
        while(l){
            l=l->left;
            left_l=left_l+1;
        }
        TreeNode* r=root->right;
        while(l){
            l=l->right;
            right_r=right_r+1;
        }
        if(left_l==right_r)
        return(1<<left_l)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};