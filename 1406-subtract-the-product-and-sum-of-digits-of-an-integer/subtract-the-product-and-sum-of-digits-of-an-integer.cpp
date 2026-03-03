class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=n;
        int sumDigit=0;
        while(p>0){
            int digit=p%10;
            sumDigit+=digit;
            p=p/10;
        }
        int prod=1;
        while(n>=1){
            int digit=n%10;
            prod*=digit;
            n=n/10;
        }
        return prod-sumDigit;
    }
};