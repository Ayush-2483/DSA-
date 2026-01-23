class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    //    sort(nums.begin(),nums.end());
    //    int ans=1;
    //    int count=1;
    //    if(nums.size()==0) return 0;
    //    for(int i=1;i<nums.size();i++){
    //     if(nums[i]==nums[i-1]+1) count++;
    //     else if(nums[i]!=nums[i-1]){
    //         ans=max(ans,count);
    //         count=1;
    //     }
    //     ans=max(ans,count);
    //    }
    //    return ans;
    unordered_map<int,int>mp;
    int count=1,ans=0;
    if(nums.size()==0) return 0;
    for(auto x : nums){
        mp[x]=1;
    }
    for(auto x : mp){
        int ele=x.first;
        if(mp.find(ele-1)==mp.end()){
            count=1;
            while(mp.find(ele+1)!=mp.end()){
                count++;
                ele++;
            }
            ans=max(ans,count);
        }
    }
    return max(ans,count);

    }
};