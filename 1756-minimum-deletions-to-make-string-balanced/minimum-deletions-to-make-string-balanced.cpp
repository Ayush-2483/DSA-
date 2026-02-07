class Solution {
public:
    int minimumDeletions(string s) {
    int Bcount=0,deletion=0;
    for(char c : s){
        if(c=='b'){
            Bcount++;
        }
        else{
            if(Bcount>0){
               deletion++;
               Bcount--; 
            }
        }
    }
    return deletion;
    }
};