class Solution {
public:
    void solve(string digits,string ans,int index,vector<string> &res,vector<string> &mapping){
        if(index>=digits.size()){
            res.push_back({ans});
            return;
        }
        int num=digits[index]-'0';
        string val=mapping[num];   //val=abc
        for(int i=0;i<val.size();i++){
            ans.push_back(val[i]);
            solve(digits,ans,index+1,res,mapping);
            ans.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        vector<string>mapping = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>res;
        string ans="";
        solve(digits,ans,0,res,mapping);

        return res;


    }
};