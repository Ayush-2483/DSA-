class Solution {
public:
    bool isEqual(vector<vector<int>>& mat1, vector<vector<int>>& target1){
        int n = mat1.size();
        int m = mat1[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(target1[i][j]!=mat1[n-j-1][i])
                return false;
            }
        }
        return true;
    }
    void rotate90(vector<vector<int>>& A){
        int n = A.size();

        // transpose
        for(int i = 0; i < n; i++){
            for(int j = i;j<n;j++){
                swap(A[i][j], A[j][i]);
            }
        }

        // reverse each row
        for(int i = 0; i < n; i++) {
            reverse(A[i].begin(), A[i].end());
        }
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=0;i<4;i++){
            if(isEqual(mat,target)) 
            return true;

            rotate90(mat);
        }
        return false;
    }
};