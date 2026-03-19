/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  void makeGraph(unordered_map<int,vector<int>>&adj , int parent , Node* curr){
      if(curr==NULL) return;
      if(parent!=-1){
          adj[curr->data].push_back(parent);
      }
      if(curr->left){
          adj[curr->data].push_back(curr->left->data);
      }
      if(curr->right){
          adj[curr->data].push_back(curr->right->data);
      }
      
      makeGraph(adj,curr->data,curr->left);
      makeGraph(adj,curr->data,curr->right);
  }
    int minTime(Node* root, int target) {
    unordered_map<int,vector<int>>adj;
    makeGraph(adj,-1,root); //O(n)
    
    //Apply BFS
    queue<int>q;
    unordered_set<int>visited;
    q.push(target);
    visited.insert(target);
    
    int minutes=0;
    
    while(!q.empty()){
        int n=q.size();
        while(n--){ //jb level order traversal karna ho tbb 
            int curr=q.front();
            q.pop();
            
            for(int &neigh : adj[curr]){
               if(visited.find(neigh)==visited.end()){ //not present in the visited 
                        q.push(neigh);
                        visited.insert(neigh);
                    } 
            }
        }
        minutes++;
        
    }
    return minutes-1;
    
    
        
    }
};