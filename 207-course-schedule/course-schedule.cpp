class Solution {
public:
    bool topologicalSortCheck(unordered_map<int,vector<int>> &adj , int N,vector<int>&indegree){
        queue<int>q;
        int count=0;
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
        if(count==N)
        return true;

        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites){
        unordered_map<int,vector<int>>adj;
        vector<int>indegree(numCourses,0); //kahn algo
        for(auto &vec : prerequisites){
            int a=vec[0];
            int b=vec[1];
            //b---->a
            adj[b].push_back(a);

            //arrow ja rha h 'a' me
            indegree[a]++;
        }
        //if cycle is present , not possible
        return topologicalSortCheck(adj,numCourses,indegree);
    }
};