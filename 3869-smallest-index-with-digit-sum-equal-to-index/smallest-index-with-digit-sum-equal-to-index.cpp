class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n =nums.size();
        for(int i=0;i<n;i++)
        {
            int sum=0,d=nums[i];
            while(d>0)
            {
                sum=sum+d%10;
                d=d/10;
            }
            if(sum==i){
                return i;
            }
        }
        return -1;
    }
};