class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n = nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int x = nums[i];
            while(x){
                int d= x %10;
                if(d==digit) count++;
                x=x/10;

            }
        }
        return count;
    }
};