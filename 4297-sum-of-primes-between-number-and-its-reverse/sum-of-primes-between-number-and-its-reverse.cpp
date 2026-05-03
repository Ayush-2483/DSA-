class Solution {
public:
    bool isPrime(int n) {
    if(n <= 1)
        return false;

    for(int i = 2; i * i <= n; i++){
        if (n % i == 0)
            return false;
    }

    return true;
}
    int sumOfPrimesInRange(int n) {
        int r=n,digit=0,rev=0;
        while(r>0){
            digit=r%10;
            rev=rev*10+digit;
            r=r/10;
        }
        int sum=0;
        for(int i = min(n,rev); i <= max(n,rev); i++) {
        if(isPrime(i)) {
            sum += i;
        }
    }
    return sum;

    }
};