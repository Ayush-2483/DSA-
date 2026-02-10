class Solution {
public:
    bool isPossible(vector<int>& a,int days,int wt){
        int d=1;
        int load=0;
        for(auto x : a){
            if(load + x <= wt){
                load+=x;
            }
            else{
                d++;
                load=x;
            }
        }
        return d<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int sum=0;
        for(int num : weights){
            sum+=num;
        }
        int ans=sum;
        int high=sum;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isPossible(weights,days,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};