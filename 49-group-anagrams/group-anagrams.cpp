class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        unordered_map<string , vector<string>>mp;
        for(auto str : strs){
            string temp=str;
            sort(str.begin(),str.end());
            mp[str].push_back(temp);
        }
        for(auto x : mp){
            res.push_back(x.second);
        }
        return res;
    }
};