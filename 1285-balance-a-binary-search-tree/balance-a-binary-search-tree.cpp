class Solution {
public:
    vector<int> vals;

    void inorder(TreeNode* root){
        if (!root) return;
        inorder(root->left);
        vals.push_back(root->val);
        inorder(root->right);
    }

    TreeNode* build(int left, int right){
        if (left > right)
        return nullptr;
        int mid = left + (right - left) / 2;
        TreeNode* node = new TreeNode(vals[mid]);
        node->left = build(left, mid - 1);
        node->right = build(mid + 1, right);
        return node;
    }

    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        return build(0, vals.size() - 1);
    }
};