class Solution {
public:
    int t[105];

    int solve(vector<int>& nums, int i, int end){
        if (i>end) return 0;

        if (t[i] != -1) return t[i];

        int take = nums[i]+solve(nums,i + 2,end);
        int skip = solve(nums, i + 1, end);

        return t[i] = max(take, skip);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];

        // Case 1: include first, exclude last
        memset(t, -1, sizeof(t));
        int ans1 = solve(nums, 0, n - 2);

        // Case 2: exclude first, include last
        memset(t, -1, sizeof(t));
        int ans2 = solve(nums, 1, n - 1);

        return max(ans1, ans2);
    }
};
