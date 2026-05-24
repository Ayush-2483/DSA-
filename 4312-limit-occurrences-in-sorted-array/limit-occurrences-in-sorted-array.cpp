class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        vector<int> ans;

        for(int x : nums){
            freq[x]++;

            if(freq[x] <= k){
                ans.push_back(x);
            }
        }

        return ans;
    }
};