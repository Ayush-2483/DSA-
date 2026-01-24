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
        
        vector<vector<int>>result;
        vector<int>temp;
        queue<TreeNode*>q;
        int size;
        q.push(root);
        if(!root) return {};
            while(!q.empty()){
                temp.clear();
                size=q.size();
                while(size--){
                    TreeNode* node=q.front();
                    q.pop();
                    temp.push_back(node->val);
                    if(node->left!=NULL) q.push(node->left);
                    if(node->right!=NULL) q.push(node->right);

                }
                result.push_back(temp);
            }
        return result;
    }
};