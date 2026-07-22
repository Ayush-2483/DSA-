class Solution {
  public:
    int findTarget(vector<int>& arr, int target) {
        int n = arr.size();
        int start=0 , end=n-1 , mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]==target)
            return mid;
            if(arr[mid-1]==target && mid>0) return mid-1;
            if(arr[mid+1]==target && mid<n-1) return mid+1;
            
            else if(arr[mid]<target)
            start=mid+1;
            else if(arr[mid] >target)
            end=mid-1;
        }
        
        return -1;
    }
};