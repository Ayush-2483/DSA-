class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
    int n = nums.size();
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(nums[i]==2){
            ans.push_back(-1);
            continue;
        }
        int k = 0;
        int temp=nums[i];
        while(temp & 1){
            k++;
            temp >>= 1;
        }

        ans.push_back(nums[i] - (1 << (k - 1)));
    }
    return ans;
    }
};