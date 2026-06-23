class Solution {
public:
    int maxDistance(string moves) {
        int L=0,U=0,D=0,R=0,wild=0;
        for(char c : moves){
            if(c=='L') L++;
            else if(c=='U') U++;
            else if(c=='R') R++;
            else if(c=='D') D++;
            else
            wild++;
        }
        return abs(R-L)+abs(U-D)+wild;
    }
};