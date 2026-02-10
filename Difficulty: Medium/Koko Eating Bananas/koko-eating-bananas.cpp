class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
     int left=1;
     int right=*max_element(arr.begin(),arr.end());
     int mid=0,ans=right;
     while(left<=right){
         mid=left+(right-left)/2;
           long long h=0;
         for(int p: arr){
             h+=(p+mid-1)/mid;
         }
             if(h<=k){
                 ans=mid;
                 right=mid-1;
             }
             else{
                 left=mid+1;
             }
     }
     return ans;
        
    }
};