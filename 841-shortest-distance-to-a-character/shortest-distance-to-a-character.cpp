class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        //left to right jayenge pehle
        vector<int>answer(n , INT_MAX);
        int prev = -n;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                prev=i;
            }
            answer[i]=i-prev;
        }
       // right to left jayenge aur min store karte chalenge 
        prev=2*n;
        for(int i=n-1;i>=0;i--){
            if(s[i]==c){
                prev=i;
            }
            answer[i]=min(answer[i],prev-i);
        }
        return answer;

    }
};