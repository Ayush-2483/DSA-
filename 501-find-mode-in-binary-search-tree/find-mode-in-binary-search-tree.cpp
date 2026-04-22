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
    int count = 0;
    int maxCount = 0;
    TreeNode* prev = NULL;
    vector<int> result;

    void inorder(TreeNode* root) {
        if (!root) return;

        inorder(root->left);
        if (prev == NULL || prev->val != root->val) {
            count = 1;
        } else {
            count++;
        }

        if (count > maxCount) {
            maxCount = count;
            result.clear();
            result.push_back(root->val);
        } else if (count == maxCount) {
            result.push_back(root->val);
        }

        prev = root;

        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return result;
    }
};