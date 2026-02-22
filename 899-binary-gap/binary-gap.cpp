class Solution {
public:
    int binaryGap(int n) {
        string binary = "";
        
        while(n>0){
            binary =char((n % 2) + '0') + binary;
            n = n/2;
        }
        int maxlen=0,last = -1;
       for(int i = 0; i < binary.size(); i++) {
            if(binary[i] == '1') {
                if(last != -1) {
                    maxlen = max(maxlen, i - last);
                }
                last = i;
            }
        }
        return maxlen;
    }
};