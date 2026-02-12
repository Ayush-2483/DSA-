class Solution {
public:
    int longestBalanced(string s) {
     int n=s.size(),maxlen=0,length=0;
     for(int i=0;i<n;i++){
        vector<int>freq(26,0);
        int maxfreq=0;
        int distinct=0;
        for(int j=i;j<n;j++){
           int index=s[j]-'a';

           if(freq[index]==0){
            distinct++;
           }
           freq[index]++;
           maxfreq=max(maxfreq,freq[index]);
           length=j-i+1;
        
        if(length == distinct*maxfreq){
            maxlen=max(maxlen,length);
        }
     }
     }
     return maxlen;
    }
};