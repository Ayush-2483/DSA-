class Solution {
  public:
    // bool isCycleDFS(vector<vector<int>> &adj,int u,vector<bool>&visited,vector<bool>& inRecursion){
    //     visited[u]=true;
    //     inRecursion[u]=true;
        
    //     for(int &v : adj[u]){
    //         if(visited[v]==false && isCycleDFS(adj,v,visited,inRecursion))
    //         return true;
    //         else if(inRecursion[v]==true)
    //         return true;
    //     }
    //     inRecursion[u]=false;
    //     return false;
    // }
    bool isCyclic(int N, vector<vector<int>> &edges) {
        vector<vector<int>>adj(N);
        for(auto &e : edges){
            int u=e[0];
            int v=e[1];
            adj[u].push_back(v);
        }
        // vector<bool>visited(V,false);
        // vector<bool> inRecursion(V,false);
        
        // for(int i=0;i<V;i++){
        //     if(!visited[i] && isCycleDFS(adj,i,visited,inRecursion)){
        //         return true;
        //     }
        // }
        // return false;
//---------------------------------------------------------------------------------------------
        queue<int>q;
        int count=0;
        vector<int>indegree(N,0);
        for(int u=0;u<N;u++){
            for(int &v : adj[u]){
                indegree[v]++;
            }
        }
        for(int i=0;i<N;i++){
            if(indegree[i]==0){
                q.push(i);
                count++;
            }
        }
        while(!q.empty()){
            int u=q.front();
            q.pop();
            
            for(int &v : adj[u]){
                indegree[v]--;
                
                if(indegree[v]==0){
                    q.push(v);
                    count++;
                }
            }
            
        }
        if(count==N)  return false;
        else   return true;
    }
};