class Solution {
public:
    int mirrorDistance(int n) {
        int p=n;
        int reverse=0;
        while(n>0){
            int digit=n%10;
            reverse=reverse*10+digit;
            n=n/10;
        }
        return abs(p-reverse);
    }
};