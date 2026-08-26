class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        for(int i = 1; ; i++){
            int multiple = k * i;
            bool found = false;

            for(int x :nums){
                if(x ==multiple){
                    found = true;
                    break;
                }
            }

            if(found==false){
                return multiple;
            }
        }
    }
};