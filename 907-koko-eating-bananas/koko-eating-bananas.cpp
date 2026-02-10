class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        int right=*max_element(piles.begin(),piles.end());
        int mid=0,ans=right;
        while(left<=right){
            mid=left+(right-left)/2;
            long long k=0;
            for(int p : piles){
                k+=(p+mid-1)/mid;
            }
                if(k<=h){
                    ans=mid;
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
        }
        return ans;
    }
};