class Solution {
public:
    int GCD(int a,int b){
        if(b==0) return a;
        return gcd(b,a%b);
    }
    int gcdOfOddEvenSums(int n) {
        int SumOdd=n*n,SumEven=n*(n+1);
        return GCD(SumOdd,SumEven);
    }
};