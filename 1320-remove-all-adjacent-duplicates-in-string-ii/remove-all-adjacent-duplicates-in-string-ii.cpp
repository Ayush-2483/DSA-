class Solution {
public:
    string removeDuplicates(string s, int k) {
        int n = s.size();
       vector<pair<char,int>>st;
       for(int i=0;i<n;i++){
        if(!st.empty() && st.back().first == s[i]){
            st.back().second++;
            if(st.back().second == k){
                st.pop_back();
            }
        }
        else{
            st.push_back({s[i],1});
        }
       } 
       string ans="";
       for(auto &p : st){
        ans+=string(p.second,p.first);
       }
       return ans;
    }
};