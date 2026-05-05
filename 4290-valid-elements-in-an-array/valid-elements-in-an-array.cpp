class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            bool left = true, right = true;

            for (int j = 0; j < i; j++) {
                if (nums[i] <= nums[j]) {
                    left = false;
                    break;
                }
            }

            for (int j = i + 1; j < n; j++) {
                if (nums[i] <= nums[j]) {
                    right = false;
                    break;
                }
            }

            if (left || right)
                ans.push_back(nums[i]);
        }

        return ans;

    }
};