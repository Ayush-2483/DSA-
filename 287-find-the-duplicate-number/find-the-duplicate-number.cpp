class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      int n = nums.size();
      int low=1,high=n-1,mid,ans,count;
      while(low<=high){
        int mid=low+(high-low)/2;
        count=0;
        for(auto x : nums) 
        if(x<=mid)
        count++;
        if(count>mid)
        {
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }

      }
      return ans;

    }
};