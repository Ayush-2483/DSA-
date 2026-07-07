class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
       long long x=0,sum=0;
        for(char c : s){
            int digit=c-'0';
            sum+=digit;
            if(digit!=0){
                x=x*10+digit;
            }
        }
        return x*sum;
    }
};