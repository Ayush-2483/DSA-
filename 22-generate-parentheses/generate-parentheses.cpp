class Solution {
public:
    vector<string>res;
    // bool isValid(string &s){
    //     int count=0;
    //     for(char c : s){
    //         if(c=='(')
    //         count++;
    //         else{
    //             count--;
    //         if(count<0)
    //         return false;
    //         }
    //     }
    //     return count==0;
    // }
    void solve(string &curr , int n, int open , int close){
        if(curr.length()==2*n){
            res.push_back(curr);
            return;
        }

        if(open < n){
        curr.push_back('(');
        solve(curr , n , open+1 , close);
        curr.pop_back();
        }
        if(close < open){
        curr.push_back(')');
        solve(curr , n , open , close+1);
        curr.pop_back();
        }
     }
    vector<string> generateParenthesis(int n) {
        string curr="";
        int open=0,close=0;
        solve(curr , n , open , close);

        return res;

    }
};

// Optimise way is using open and close variable checks if open < n  & close < n then we 
//go ahead furthur  