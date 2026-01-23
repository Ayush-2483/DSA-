class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>m; 
        m[0]=1;
        int prefixSum=0,rem,total=0;
        for(int i=0;i<nums.size();i++){
            prefixSum+=nums[i];

            rem=(prefixSum %  k + k)%k;
            total+=m[rem];

            m[rem]++;
        }
        return total;
    }
};