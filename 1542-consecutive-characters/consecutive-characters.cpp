class Solution {
public:
    int maxPower(string s) {
        int maxi=1;
        int currLen=1;

        for(int i=1;i<s.length();i++){
            if (s[i] ==s[i-1]){
                currLen++;
            } else {
                currLen=1;
            }
            maxi=max(maxi,currLen);

        }

        return maxi;
    }
};