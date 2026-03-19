/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  int solve(Node* root,int &moves){
      if(root==NULL) return 0;
      
      int l =solve(root->left,moves);
      int r =solve(root->right,moves);
      
      moves+=abs(l)+abs(r);
      
      return (l+r+root->data) - 1;
  }
    int distCandy(Node* root) {
        int moves=0;
        solve(root,moves);
        return moves;
        
    }
};