class Solution {
  public:
    bool checkBipartiteDFS(unordered_map<int,vector<int>> &adj,int curr , vector<int>&color,int currColor){
        color[curr]=currColor; //color kardiya curr node ko 
        // ab jate h adjacent node par
        for(int &v:adj[curr]){
            if(color[v]==color[curr]) return false;
            if(color[v]== -1){
                int colorOfV=1-currColor;
                if(checkBipartiteDFS(adj,v,color,colorOfV)==false)
                return false;
            }
        }
        return true;
    }
    bool isBipartite(int V, vector<vector<int>> &edges) {
        unordered_map<int,vector<int>>adj(V);
        for(auto &e : edges){
            int u=e[0];
            int v=e[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>color(V,-1); //no node colored 
        //red=1 // green=0
        for(int i=0;i<V;i++){
            if(color[i]== -1){
               if(checkBipartiteDFS(adj , i, color,1)==false)
               return false;
            }
        }
        return true;
        
    }
};