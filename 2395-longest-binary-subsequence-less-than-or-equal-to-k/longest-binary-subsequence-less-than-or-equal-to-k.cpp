class Solution {
public:
    int longestSubsequence(string s, int k) {
        int n = s.size();
        int count=0;
        for(char c : s){
            if(c=='0')
            count++;
        }
        int sum=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1' && sum+pow(2,n-i-1)<=k){
                sum += pow(2,n-i-1);
                count++;
            }
            else if(s[i]=='1' && sum>k){
                break;
            }
        }
        return count;
    }
};