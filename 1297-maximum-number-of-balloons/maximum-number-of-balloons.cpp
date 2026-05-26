class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string need = "balloon";
        unordered_map<char , int>target;
        unordered_map<char , int>freq;
        for(char c : text){
            freq[c]++;
        }
        for(char c : need){
            target[c]++;
        }
        int ans = INT_MAX;
        for (auto &p :target){
            char c =p.first;
            int need =p.second;
            ans = min(ans, freq[c]/need);
        }
        return ans;

        
    }
};