class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int low=0,high=n-1,ans=0;
        while(low<high){
            int mini = min(height[low],height[high]);
            ans=max(ans,mini*(high-low));
            if(height[low]<height[high])
            low++;
            else
            high--;
        }
        return ans;
    }
};