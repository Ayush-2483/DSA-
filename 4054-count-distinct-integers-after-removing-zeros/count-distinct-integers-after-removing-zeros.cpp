class Solution {
public:
    long long countDistinct(long long n) {
        string s=to_string(n);
        int m=s.size();
        vector<long long>v(m+1,1);
        for(int i=1;i<=m;i++){
            v[i]=v[i-1]*9LL;
        }
        long long total=0;
        for(int len=1;len<m;len++){
            total+=v[len];
        }
        for(int i=0;i<m;i++){
            int d=s[i]-'0';
            if(d==0)return total;
            total+=(long long)(d-1)*v[m-i-1];
        }
        return total+1;
    }
};