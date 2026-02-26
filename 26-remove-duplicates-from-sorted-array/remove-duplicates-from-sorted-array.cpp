class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
      int n=nums.size();
      unordered_set<int>seen;
      int index=0;
      for(int num : nums){
        if(seen.find(num)==seen.end()){
            seen.insert(num);
             nums[index]=num;
             index++;
        }
      }
      return index;
    }
};