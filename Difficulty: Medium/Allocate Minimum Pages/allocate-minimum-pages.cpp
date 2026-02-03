class Solution {
  public:
    bool isPossible(vector<int>&books,int students,int maxPageAllow){
        int s_count=1;
        int pages=0;
        for(auto page : books){
            if(pages+page <= maxPageAllow){
                pages+=page;
            }
            else{
                s_count++;
                pages=page;
            }
        }
        return s_count<=students;
    }
    int findPages(vector<int> &arr, int k) {
       if(arr.size()<k) return -1;
       int ans= -1;
       int l=arr[0];
       for(auto x : arr){
           l=max(l,x);
       }
       int h=0;
       for(auto x : arr){     // F,F,F,F,F,T,T,T,T
           h+=x;
       }
       while(l<=h){
           int mid=l+(h-l)/2;
           if(isPossible(arr,k,mid)){
               ans=mid;
               h=mid-1;
           }
           else{
               l=mid+1;
           }
       }
       return ans;
        
    }
};