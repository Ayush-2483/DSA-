class Solution {
public:
    bool strictInc(vector<int>&temp){
        for(int i=1;i<temp.size();i++){
            if(temp[i]<=temp[i-1]) return false;
        }
        return true;
    }
    int incremovableSubarrayCount(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        for(int l=0;l<n;l++){
            for(int r=l;r<n;r++){
                vector<int>arr;
                for(int i=0;i<n;i++){
                    if(i<l || i>r){
                        arr.push_back(nums[i]);
                    }
                }
                if(strictInc(arr))
                count++;
            }
        }
        return count;
    }
};