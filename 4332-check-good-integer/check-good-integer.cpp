class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum=0,squareSum=0;
        while(n>0){
            int digits=n%10;
            digitSum+=digits;
            squareSum+=digits*digits;
            n/=10;
        }
        if(squareSum -digitSum>=50)
        return true;
        else
        return false;

    }
};