class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int>positive;
        for(int &x : nums){
            if(x>=0)
            positive.push_back(x);
        }
        int m=positive.size();
        if(m==0)
        return nums;
        k%=m;
        rotate(positive.begin(),positive.begin()+k,positive.end());
        int idx = 0;
        for(int i = 0;i <nums.size();i++){
            if(nums[i] >= 0) {
                nums[i]=positive[idx++];
            }
        }
        
        return nums;

    }
};