class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
     int l=0,r=arr.size()-1,ans=arr.size(),mid=0;
     while(l<=r){
        mid=l+(r-l)/2;
        if(arr[mid]-mid-1>=k){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
     }
     return ans+k;
    }
};