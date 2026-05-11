class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        // vector<int>res;
        // for(int x : nums){
        //     vector<int>list;
        //     int p=x;
        //     while(p > 0){
        //         int d=p%10;
        //         list.push_back(d);
        //         p=p/10;
        //     }
        //     reverse(list.begin(),list.end());
        //     res.insert(res.end(), list.begin(),list.end());
        //     list.clear();


        // }
        // return res;
        //-------------------------------------
        //2nd Approach 
        vector<int>ans;
        for(auto &it : nums){
            string res=to_string(it);
            for(auto &temp : res){
            ans.push_back(temp-'0');
            }
        }
        return ans;
        
    }
};