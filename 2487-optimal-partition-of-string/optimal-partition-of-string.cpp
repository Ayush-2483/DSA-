class Solution {
public:
    int partitionString(string s) {
        vector<bool>seen(26, false);
        int count = 1;

        for(char c : s){
            int idx= c -'a';
            if(seen[idx]){
                count++;               
                fill(seen.begin(), seen.end(), false);
            }
            seen[idx]=true;
        }

        return count;
    }
};