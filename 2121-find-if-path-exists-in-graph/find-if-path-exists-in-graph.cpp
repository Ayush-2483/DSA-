class Solution {
public:
    bool dfs(int source , int destination , vector<vector<int>>&adjlist,vector<bool> &visited){
       if(source==destination)
       return true;
        visited[source] = true;
       for(int ng : adjlist[source]){
        if(!visited[ng]){
            if(dfs(ng,destination,adjlist,visited))
            return true;
        }

       }  
       return false;
              
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adjlist(n);
        for(auto &edge : edges){
            int u=edge[0];
            int v=edge[1];
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }
        vector<bool>visited(n,false);
        return dfs(source,destination,adjlist,visited);



    }
};