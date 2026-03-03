class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sumDigit=0;
        while(n>0){
            int digit=n%10;
            sumDigit+=digit;
            prod*=digit;
            n=n/10;
        }
        return prod-sumDigit;
    }
};