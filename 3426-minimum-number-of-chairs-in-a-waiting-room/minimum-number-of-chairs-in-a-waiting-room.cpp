class Solution {
public:
    int minimumChairs(string s) {
        int people = 0, ans = 0;

        for(char c : s){
            if(c == 'E')
                people++;
            else
                people--;

            ans = max(ans,people);
        }

        return ans; 
    }
};