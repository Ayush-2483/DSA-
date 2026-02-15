class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int n = bulbs.size();
        vector<int>res;
        unordered_map<int,int>freq;
        for(int x : bulbs){
            freq[x]++;
        }
        for(auto &it : freq){
            if(it.second%2==1){
                res.push_back(it.first);
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};