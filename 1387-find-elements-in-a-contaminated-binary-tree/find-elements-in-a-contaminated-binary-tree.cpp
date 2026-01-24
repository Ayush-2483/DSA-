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
class FindElements {
public:
    TreeNode* rootNode;
    bool traversal(TreeNode* root , int target){
        if(root==NULL) return false;
        if(root->val==target)
        return true;
        return traversal(root->left,target) || traversal(root->right,target);

    }
    FindElements(TreeNode* root) {
        queue<TreeNode*>q;
        root->val=0;
        q.push(root);
        if(!root) return;
        rootNode=root;
            while(!q.empty()){
                TreeNode* node=q.front();
                q.pop();
                if(node->left!=NULL){
                    node->left->val=2*node->val+1;
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    node->right->val=2*node->val+2;
                    q.push(node->right);
                }
            }
    }
    
    bool find(int target) {
        return traversal(rootNode,target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */