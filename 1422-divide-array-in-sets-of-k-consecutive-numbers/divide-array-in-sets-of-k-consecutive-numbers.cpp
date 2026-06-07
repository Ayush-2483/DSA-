class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n =nums.size();
        if(n%k!=0) return false;
        map<int,int>freq;
        for(int x : nums){
            freq[x]++;
        }
        for(auto &it : freq){
            if(it.second==0) continue;

            int need=it.second;

            for(int j=0;j<k;j++){
                if(freq[j+it.first]<need){
                    return false;
                }
                freq[j+it.first]-=need;
            }
        }
        return true;
    }
};