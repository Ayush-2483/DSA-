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
    bool isSameTree(TreeNode* root1, TreeNode* root2) {

    // Dono NULL hain
    if (root1 == nullptr && root2 == nullptr)
        return true;

    // Ek NULL hai aur doosra nahi
    if (root1 == nullptr || root2 == nullptr)
        return false;

    // Values different hain
    if (root1->val != root2->val)
        return false;

    // Left aur right dono same hone chahiye
    return isSameTree(root1->left, root2->left) &&
           isSameTree(root1->right, root2->right);
}
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
         if (subRoot == nullptr)
        return true;

    if (root == nullptr)
        return false;

    // Agar current node se tree same hai
    if (isSameTree(root, subRoot))
        return true;

    // Left ya right mein subtree ho sakta hai
    return isSubtree(root->left, subRoot) ||
           isSubtree(root->right, subRoot);
    }
};