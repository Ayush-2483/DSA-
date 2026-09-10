class Solution {
public:
    long long countCommas(long long n) {
       long long ans=0,start=1000,commas=1;

        while(start <= n){
            long long end =(start > n / 1000) ? n : start*1000 - 1;
            ans +=(end -start+1)*commas;

            start *= 1000;
            commas++;
        }

        return ans; 
    }
};