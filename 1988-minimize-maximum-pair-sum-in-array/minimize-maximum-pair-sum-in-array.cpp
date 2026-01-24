class Solution {
public:
    int minPairSum(vector<int>& nums) {
        // int n = nums.size();
        // sort(nums.begin(),nums.end());
        // int i=0,j=n-1;
        // int ans=INT_MIN;
        // while(i<j){
        //   ans=max(ans,nums[i]+nums[j]);
        //   i++;
        //   j--;
        // }
        // return ans;

        const int MAX =100000;
        vector<int>freq(MAX + 1,0);

        for (int x : nums) freq[x]++;

        int low = 1,high = MAX;
        int ans = 0;

        while (low <= high){
            while (low <= high && freq[low] == 0) low++;
            while (low <= high && freq[high] == 0) high--;

            if (low > high) 
            break;

            ans = max(ans, low + high);
            freq[low]--;
            freq[high]--;
        }

        return ans;


    }
};