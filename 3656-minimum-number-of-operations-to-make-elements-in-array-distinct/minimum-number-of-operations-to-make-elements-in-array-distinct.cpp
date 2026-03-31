class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        for(int k=0;k<=(n+2)/3;k++){
            unordered_set<int>s;
            bool distinct=true;
            for(int i=3*k;i<n;i++){
                if(s.count(nums[i])){
                    distinct=false;
                    break;
                }
                s.insert(nums[i]);
            }
            if(distinct) return k;
        }
        return 0;
    }
};