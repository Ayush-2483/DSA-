class Solution {
public:
    int result=INT_MIN;
    int solve(TreeNode* root,int start){
        if(root==NULL) return 0;
        int LH=solve(root->left,start);
        int RH=solve(root->right,start);

        if(root->val==start){
            result=max(LH,RH);
            return -1;
        }
        else if(LH>=0 && RH>=0){
            return max(LH,RH)+1;
        } 
        else{
            int d= abs(LH)+abs(RH);
            result=max(result,d);

            return min(LH,RH)-1;

        }
        return 0;
    }
    // void makeGraph(unordered_map<int,vector<int>>&adj,int parent ,TreeNode* curr){
    //     if(curr==NULL)  return;

    //     if(parent!=-1){
    //         adj[curr->val].push_back(parent);
    //     }
    //     if(curr->left){
    //         adj[curr->val].push_back(curr->left->val);
    //     }
    //     if(curr->right){
    //         adj[curr->val].push_back(curr->right->val);
    //     }
    //     makeGraph(adj ,curr->val,curr->left);
    //     makeGraph(adj ,curr->val,curr->right);
    // }
    int amountOfTime(TreeNode* root, int start) {
        // unordered_map<int,vector<int>> adj;
        // makeGraph(adj , -1 , root);   //O(n)

        // //Apply BFS from start
        // queue<int>que;
        // unordered_set<int>visited;
        // que.push(start);
        // visited.insert(start);

        // int minutes=0;
        // while(!que.empty()){  //O(n)
        //     int n = que.size();  //current level size
        //     while(n--){
        //         int curr=que.front();
        //         que.pop();

        //         for(int &neigh : adj[curr]){
        //             if(visited.find(neigh)==visited.end()){   //not present in the visited 
        //                 que.push(neigh);
        //                 visited.insert(neigh);
        //             }
        //         }
        //     }
        //     minutes++;
        // }
        // return minutes-1;

//---------------------------------------------------------------------------------Approach 2 : 
      solve(root,start);
      return result;
      
    }
};