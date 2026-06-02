class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //Approach -1 (Brute Force)
        int m = matrix.size();
        int n = matrix[0].size();

        // vector<vector<int>>temp=matrix;//copy
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(matrix[i][j]==0){
        //             for(int k=0;k<n;k++){
        //                 temp[i][k]=0; //marking ith row as 0
        //             }

        //             for(int k=0;k<m;k++){
        //                 temp[k][j]=0; //marking jth col as 0
        //             }
        //         }
        //     }
        // }
        // matrix=temp;
        //-----------------------------------------------------------------
        //-->Better Approach 
        vector<bool>row(m,false);
        vector<bool>col(n,false);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(row[i]==true || col[j]==true){
                    matrix[i][j]=0;
                }
            }
        }
        


    }
};