class Solution {
public:
    vector<int>topologicalSort(unordered_map<int,vector<int>> &adj , int N,vector<int>&indegree){
        queue<int>q;
        int count=0;
        vector<int>result;
        for(int i=0;i<N;i++){
            if(indegree[i]==0){
                result.push_back(i);
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
                    result.push_back(v);
                    q.push(v);
                    count++;
                }
            }
        }
        if(count==N)
        return result;
//means we had a cycle and we couldn't complete all couses
        return {};
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int,vector<int>>adj;
        vector<int>indegree(numCourses,0); //kahn algo
        for(auto &vec : prerequisites){
            int a=vec[0];
            int b=vec[1];

          //  {a,b} b----->a
           adj[b].push_back(a);
           //arrow->'a' me ja rha hai 
            indegree[a]++;
        }
     return topologicalSort(adj,numCourses,indegree);
    }
};