class Solution {
public:
    vector<int>t;
    int solve(vector<int>&arr,int i){
        if(i>=arr.size()){
            return 0;
        }
        
        if(t[i]!=-1)
        return t[i];
        
        int a=arr[i]+solve(arr,i+2); //include
        int b=solve(arr,i+1); // skip houses
        
        
        
        return t[i]= max(a,b);
    }
    int rob(vector<int>& arr) {
        int n=arr.size();
        t.assign(n+1,-1);
        return solve(arr,0);
        
    }
};