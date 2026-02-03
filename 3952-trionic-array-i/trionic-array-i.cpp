class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 4) return false;

        int i = 0;

        //increasing
        while(i + 1 < n && nums[i] <nums[i + 1]){
            i++;
        }
        if (i == 0 || i == n - 1) return false;

        //decreasing
        int downStart = i;
        while(i + 1 < n && nums[i] >nums[i + 1]){
            i++;
        }
        if (i == downStart || i == n - 1) return false;

        //increasing again
        while(i + 1 < n && nums[i] <nums[i + 1]){
            i++;
        }

        return i == n - 1; 
    }
};