class Solution {
  public:
    int getLPSLength(string &s) {
        int M=s.size();
        if(M==0) return 0;
        vector<int>LPS(M,0);
        int len=0;
         int i=1;
      while(i<M){
          if(s[i]==s[len]){
              len++;
              LPS[i]=len;
              i++;
          }else{
              if(len!=0)
              len=LPS[len-1];
              else{
                  LPS[i]=0;
                  i++;
              }
          }
      }
      return LPS[M-1];
        
    }
};