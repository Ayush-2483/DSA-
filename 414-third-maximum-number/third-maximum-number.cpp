class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        vector<int>v(s.begin(),s.end());
        int n=v.size();
        if(n<3) return v[n-1];

        return v[n-3];
    }
};