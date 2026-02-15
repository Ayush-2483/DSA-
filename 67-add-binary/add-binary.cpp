class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";
        int i=a.size()-1 , j= b.size()-1 , carry=0;
        while(i>=0 || j>=0 || carry){
            int total = carry;

            if(i >= 0){
                total += a[i] - '0';
                i--;
            }

            if(j >= 0){
                total += b[j] - '0';
                j--;
            }

            result = result+ char((total % 2) + '0');
            carry = total / 2;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};