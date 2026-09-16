class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        int ans=0;
        for(auto &it : mp){
            if(it.second.size()==3){
                int a=it.second[0];
                int b=it.second[1];
                int c=it.second[2];

                if(b-a == c-b) ans++;
            }
        }
        return ans;
    }
};