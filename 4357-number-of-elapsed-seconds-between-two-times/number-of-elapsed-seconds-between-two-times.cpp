class Solution {
public:
    int second(string t){
        int hrs=stoi(t.substr(0,2));
        int min=stoi(t.substr(3,2));
        int sec=stoi(t.substr(6,2));

        return hrs*3600+min*60+sec;
    }
    int secondsBetweenTimes(string startTime, string endTime) {
        return second(endTime)-second(startTime);
        
    }
};