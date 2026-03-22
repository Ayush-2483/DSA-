class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(!st.empty()){
                char top = st.top();
            if(top=='A' && s[i]=='B' || top=='C'&& s[i]=='D'){
                st.pop();
                continue;
            }
            }
                st.push(s[i]);
        }
        return st.size();
    }
};