class Solution {
public:
    string longestNiceSubstring(string s) {
        unordered_set<char>st(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            char c=s[i];
            //agr opposite case present nahi h tbb
            if(st.find(tolower(c))==st.end()||st.find(toupper(c))==st.end()){
                string left=longestNiceSubstring(s.substr(0,i));
                string right=longestNiceSubstring(s.substr(i+1));

                if(left.size()>=right.size())
                return left;
                else
                return right;
            }
        }
        return s;  // Koi invalid character nahi mila
        // Matlab poori string nice hai
    }
};