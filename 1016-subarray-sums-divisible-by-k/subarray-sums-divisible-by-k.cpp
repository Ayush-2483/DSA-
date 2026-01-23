class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int>m(k); 
        m[0]=1;
        int prefixSum=0,total=0;
        for(auto &num : nums){
            prefixSum+=num;

           auto rem=((prefixSum %  k) + k)%k;

            total+=m[rem];

            m[rem]++;

        }
        return total;
    }
};