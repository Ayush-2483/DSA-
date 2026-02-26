class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
      int n=nums.size();
    //   unordered_set<int>seen;
    //   int index=0;
    //   for(int num : nums){
    //     if(seen.find(num)==seen.end()){
    //         seen.insert(num);
    //          nums[index]=num;
    //          index++;
    //     }
    //   }
    //   return index;
    int i=1;
    for(int j=1;j<n;j++){
        if(nums[j]!=nums[j-1]){
            nums[i]=nums[j];
            i++;
        }
    }
    return i;
    }
};