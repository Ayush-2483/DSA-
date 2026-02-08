class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int> firstPos(26, -1);

        for(int i = 0; i<s.size();i++){
            int idx =s[i] -'a';

            if(firstPos[idx] == -1){
                firstPos[idx] = i;
            }else{
                int gap= i -firstPos[idx]-1;
                if(gap !=distance[idx]){
                    return false;
                }
            }
        }

        return true;
    }
};