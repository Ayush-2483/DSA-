class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        char arr[26];
        for(int i=25;i>=0;i--){
            arr[i]='a'+(25-i);
        }
        string ans="";
        for(string s : words){
            int sum=0;
            for(char c : s){
                sum+=weights[c-'a'];
            }
            sum=sum%26;
            ans+=arr[sum];

        }
        return ans;
    }
};