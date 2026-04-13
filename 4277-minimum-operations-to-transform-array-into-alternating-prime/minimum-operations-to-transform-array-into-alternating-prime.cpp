class Solution {
public:
    bool isPrime(int n){
        if(n<2) return false;
        if(n==2) return true;
        if(n%2==0) return false;
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0) return false;
        }
        return true;
    }

    int minOperations(vector<int>& nums) {
        long long ops=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int x=nums[i];
            if(i % 2==0){
                while(!isPrime(x)){
                    x++;
                    ops++;
                }
            }else{
                while(isPrime(x)){
                    x++;
                    ops++;
                }
            }
        }
        return ops;
    }
};