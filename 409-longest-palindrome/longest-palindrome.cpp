class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char , int>freq;
        for(char c : s){
            freq[c]++;
        }
        bool odd=false;
        int length=0;
        for(auto it : freq){
            int val=it.second;
            if(val%2==0)
            length+=val;
            else
            odd=true;
        }
        if(odd==false) return length;
        for(auto i : freq){
            int val=i.second;
            if(val%2==1){
                length+=val-1;
            }
        }
        return length+1;
    }
};