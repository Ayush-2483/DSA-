class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int>less,equal,greater;
        for(int x : nums){
            if(x<pivot){
                less.push_back(x);
            }
            else if(x==pivot){
                equal.push_back(x);
            }
            else{
                greater.push_back(x);
            }
        }
        vector<int>result(nums.size());
        int idx=0;
        for(int x : less){
            result[idx++]=x;
        }
        for(int x : equal){
            result[idx++]=x;
        }
        for(int x: greater){
            result[idx++]=x;
        }
        return result;
    }
};