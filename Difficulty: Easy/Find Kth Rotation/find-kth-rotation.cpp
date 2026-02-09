class Solution {
  public:
    int findKRotation(vector<int> &arr) {
      int n=arr.size();
      for(int i=1;i<n;i++){
          if(arr[i-1]>arr[i]){
              return i;
          }
      }
      return 0;
        
    }
};
