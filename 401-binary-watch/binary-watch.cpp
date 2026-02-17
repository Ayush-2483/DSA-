class Solution {
public:
    int numberOf1bit(int n){
        int count = 0;
        while(n!=0){
            n=n&(n-1);
            count++;
        }
        return count;
    }
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string>res;
        for(int h=0;h<12;h++){
            for(int m=0;m<60;m++){
                if(numberOf1bit(h)+numberOf1bit(m)==turnedOn){
                    string time=to_string(h)+":";
                    if(m< 10){
                        time+="0";
                    }
                    time+=to_string(m);
                    
                    res.push_back(time);
                }
            }
        }
        return res;

    }
};