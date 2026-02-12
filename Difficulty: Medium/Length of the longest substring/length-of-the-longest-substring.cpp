class Solution {
  public:
    int longestUniqueSubstring(string &s) {
   int count[26];
        for(int i =0;i<26;i++)
        {
            count[i]=0;
        }
        int first=0,second=1,total=1;
        count[s[0]-'a']++;
        while(second<s.size())
        {
            while(count[s[second]-'a']){
                count[s[first]-'a']=0;
                first++;
            }
            count[s[second]-'a']=1;
            total=max(total,second-first+1);
            second++;
        }
        return total;
    }
};