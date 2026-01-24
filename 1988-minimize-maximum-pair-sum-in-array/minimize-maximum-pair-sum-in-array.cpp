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

        for(int x : nums) 
        freq[x]++;

        int i = 1,j = MAX;
        int ans = 0;

        while(i<= j){
            while(i<=j && freq[i] == 0) 
            i++;
            while(i<=j && freq[j] == 0) 
            j--;

            if(i >j) 
            break;

            ans = max(ans,i+j);
            freq[i]--;
            freq[j]--;
        }

        return ans;


    }
};