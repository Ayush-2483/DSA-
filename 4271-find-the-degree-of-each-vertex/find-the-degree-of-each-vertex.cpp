class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>ans;
        int n = matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++){
            int x=0;
            for(int j=0;j<m;j++){
                x+=matrix[i][j];
            }
            ans.push_back(x);
        }
    return ans;

    }
};