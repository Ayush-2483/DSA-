class Solution {
public:
    int reverseNum(int n) {
        int rev = 0;
        while (n) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        return rev;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int>mp;
        int ans = INT_MAX;

        for (int j = 0; j < (int)nums.size(); j++) {
            if (mp.count(nums[j]))
                ans = min(ans, j - mp[nums[j]]);
            mp[reverseNum(nums[j])] = j;
        }

        return (ans == INT_MAX) ? -1 : ans;
    }
};