class Solution {
public:
    int reverseBits(int n) {
    // int result=0;
    //  for(int i =0;i<32;i++){
    //     result = (result << 1) |(n & 1);
    //     n = n >>1;
    // }
    // return result;
    string binary = "";
        
        while(n > 0){
            binary = char((n % 2) + '0') + binary;
            n = n / 2;
        }
        
        while(binary.length() < 32){
            binary = '0' + binary;
        }
        
        reverse(binary.begin(), binary.end());
        
        long long  result = 0;
        long long base = 1;
        
        for(int i = 31; i >= 0; i--){
            if(binary[i] == '1'){
                result += base;
            }
            base *= 2;
        }
        
        return result;
    }
};