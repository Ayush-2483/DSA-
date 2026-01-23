class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1; // edge case
        int prefixSum=0,count=0;
        for(int i=0;i<nums.size();i++){
            prefixSum+=nums[i];
            if(mp.count(prefixSum-k)){  // frequency count 
                count+=mp[prefixSum-k];
            }
            mp[prefixSum]++;
        }
        return count;
    }
};