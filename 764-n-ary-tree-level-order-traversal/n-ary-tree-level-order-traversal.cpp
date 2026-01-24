/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
       vector<vector<int>>result;
        vector<int>temp;
        queue<Node*>q;
        int size;
        q.push(root);
        if(!root) return {};
            while(!q.empty()){
                temp.clear();
                size=q.size();
                while(size--){
                    Node* node=q.front();
                    q.pop();
                    temp.push_back(node->val);
                    for(Node* child:node->children)
                        q.push(child);

                }
                result.push_back(temp);
            }
        return result;
    }
};