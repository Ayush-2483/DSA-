class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n = nums.size(),ans=0;
        for(int l=0;l<n;l++){
            int mn=nums[l];
            int AND= nums[l];

            for(int r=l;r<n;r++){
                mn=min(mn,nums[r]);
                AND &= nums[r];
            
            if(AND==mn){
                ans++;
            }
            }
        }
        return ans;
        
    }
};