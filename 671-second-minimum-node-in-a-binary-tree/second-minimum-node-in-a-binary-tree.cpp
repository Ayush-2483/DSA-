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
    long secondMin = LONG_MAX;
    int minVal;
    void dfs(TreeNode* root){
        if(!root) return;
        if(root->val > minVal){
            secondMin=min(secondMin,(long)root->val);
        }
        else if(root->val == minVal){
            dfs(root->left);
            dfs(root->right);
        }
    }
    int findSecondMinimumValue(TreeNode* root) {
       minVal=root->val;
       dfs(root);
       return (secondMin == LONG_MAX) ? -1 : secondMin; 
    }
};