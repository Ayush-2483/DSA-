class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char>st;
        int n = word.size();
        int i;
        bool found=false;
        for(i=0;i<n;i++){
            if(word[i]!=ch){
                st.push(word[i]);
            }
            else{
                st.push(word[i]);
                found=true;
                break;
            }
        }
        string ans="";
        while(!st.empty()){
            ans=ans+st.top();
            st.pop();
        }
        for(int j=i+1;j<n;j++){
            ans+=word[j];
        }
        if(found==false) return word;
        return ans;

    }
};