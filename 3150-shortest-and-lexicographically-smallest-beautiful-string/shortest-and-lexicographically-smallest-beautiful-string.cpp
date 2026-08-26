class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<int>pos;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')
            pos.push_back(i);
        }
        if(pos.size()<k) return "";
        string ans="";
        for(int i=0;i+k-1<pos.size();i++){
         int start=pos[i];
            int end=pos[i+k-1];

            string candidate = s.substr(start, end - start + 1);

            if(ans == ""|| candidate.size() <ans.size() ||
                (candidate.size() == ans.size() && candidate < ans)){
                ans = candidate;
            }
        }
        return ans;
    }
};