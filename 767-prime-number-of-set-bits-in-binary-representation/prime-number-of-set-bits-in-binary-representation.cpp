class Solution {
public:
    int numberOfSetbit(int n){
      int count = 0;
        while(n!=0){
            n=n&(n-1);
            count++;
        }
        return count;  
    }
    bool isPrime(int n){
    if(n <= 1)
        return false;

    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
    int countPrimeSetBits(int left, int right) {
        int count=0;
     for(int i=left;i<=right;i++){
        int x = numberOfSetbit(i);
        if (isPrime(x))
            count++;
     }
     return count;
    }
};