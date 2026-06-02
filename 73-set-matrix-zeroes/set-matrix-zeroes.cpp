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
        // vector<bool>row(m,false);
        // vector<bool>col(n,false);
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(matrix[i][j]==0){
        //             row[i]=true;
        //             col[j]=true;
        //         }
        //     }
        // }
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(row[i]==true || col[j]==true){
        //             matrix[i][j]=0;
        //         }
        //     }
        // }
        //-----------------------------------------------------------------------------
        //-->Optimal Approach 
        //check first row impacted hai ya nahi 
        bool firstRowImpacted=false;
        for(int col=0;col<n;col++){
            if(matrix[0][col]==0){
                firstRowImpacted=true;
                break;
            }
        }
        //check first col impacted hai ya nahi '
         bool firstColImpacted=false;
        for(int row=0;row<m;row++){
            if(matrix[row][0]==0){
                firstColImpacted=true;
                break;
            }
        }
        //set markers in the first row/col
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
         for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(firstRowImpacted){
            for(int j=0;j<n;j++){
                matrix[0][j]=0;
            }
        }
        if(firstColImpacted){
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }
            



    }
};