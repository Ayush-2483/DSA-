class Solution {
public:
    int minimumDeletions(string s) {
    int Bcount=0,deletion=0;
    for(char c : s){
        if(c=='b'){
            Bcount++;
        }
        else{
            deletion=min(deletion+1,Bcount);
        }
    }
    return deletion;
    }
};