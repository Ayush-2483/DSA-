class Solution {
public:
    long long countDistinct(long long n) {
        string s = to_string(n);
        int len = s.size();
        
        long long ans = 0;

        for(int l = 1; l < len; l++){
            long long ways = 1;
            for(int i = 0; i < l; i++){
                ways *= 9;
            }
            ans += ways;
        }

        for(int i = 0; i < len; i++){
            int digit = s[i] - '0';

            for(int d = 1; d < digit; d++){
                long long ways = 1;
                for(int j = i + 1; j < len; j++){
                    ways *= 9;
                }
                ans += ways;
            }

            if(digit == 0) break;

            if(i == len - 1) ans++;
        }

        return ans;
    }
};