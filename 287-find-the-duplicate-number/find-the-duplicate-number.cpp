class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        slow=nums[slow]; //initially moves chal denge 
        fast=nums[nums[fast]];

        while(slow!=fast){
            slow=nums[slow]; //Detect cycle
            fast=nums[nums[fast]];
        }
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];  // find the duplicate number 

            fast=nums[fast];
        }
        return slow;

    }
};