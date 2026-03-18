class Solution {
public:
void helper(int idx,string sent,string s,vector<string>&result,unordered_set<string>&list){
    if(idx==s.size()){
        sent.pop_back();
        result.push_back(sent);
        return ;
    }
    string word="";
    for(int i=idx;i<s.size();i++){
        word+=s[i];
        if(list.find(word)!=list.end()){
            helper(i+1,sent+word+' ',s,result,list);
        }
    }
}
    vector<string> wordBreak(string s, vector<string>& wordDict) {
       unordered_set<string>list(wordDict.begin(),wordDict.end());
       string st="";
       vector<string>result;
       helper(0,st,s,result,list);
       return result; 
    }
};