class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
       unordered_set<int>diffcandy(candyType.begin(), candyType.end());
       return min((int)diffcandy.size(),(int)candyType.size()/2);
       
    }
};