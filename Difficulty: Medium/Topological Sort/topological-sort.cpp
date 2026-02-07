class Solution {
  public:
    // void DFS(vector<vector<int>> &adj,int u,vector<bool>&visited,stack<int>&st){
    //     visited[u]=true;
    //     // pehle mere 'u' ke bachhi ko daalo 
    //     for(int &v : adj[u]){
    //         if(!visited[v])
    //         DFS(adj,v,visited,st);
    //     }
    //     //ab mujhe dalo stack me 
    //     st.push(u);
    // }
    //-------------------------------------------------------------------------------
    
    vector<int> topoSort(int N, vector<vector<int>>& edges) {
        vector<vector<int>>adj(N);
        for(auto &e : edges){
            int u=e[0];
            int v=e[1];
            
            adj[u].push_back(v);
        }
        // vector<bool>visited(V,false);
        // stack<int>st;
        // for(int i=0;i<V;i++){
        //   if(!visited[i]){
        //       DFS(adj,i,visited,st);
        //   } 
        // }
        // vector<int>result;
        // while(!st.empty()){
        //     result.push_back(st.top());
        //     st.pop();
        // }
        // return result;
//--------------------------------------------------------------------------------------------------------------------
        vector<int>indegree(N,0);
        for(int u=0;u<N;u++){
            for(int &v : adj[u]){
                indegree[v]++;
            }
        }
        queue<int>q;
        
        //fill the queue , indegree -->0
        for(int i=0;i<N;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        
        //simple BFS
        vector<int>result;
        while(!q.empty()){
            int u=q.front();
            result.push_back(u);
            q.pop();
            
            for(int &v : adj[u]){
                indegree[v]--;
                
                
                if(indegree[v]==0){
                    q.push(v);
                }
            }
        }
        return result;
        
        
    }
};