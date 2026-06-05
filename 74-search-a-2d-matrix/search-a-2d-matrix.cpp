class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m =matrix.size();
        int n =matrix[0].size();
        // for(int i=0;i<m;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         if(matrix[i][j]==target)
        //         return 1;
        //     }
        // }
        // return 0;
        int low=0 , high=m*n-1;
        while(low<=high){
            int mid=low+(high-low)/2;

            int row=mid/n,col=mid%n;

            int val=matrix[row][col];
            if(val==target){
                return true;
            }
            else if(val <target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;

    }
};