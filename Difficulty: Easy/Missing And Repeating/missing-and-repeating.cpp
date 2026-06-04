class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        int repeating = -1;
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]){
            repeating=arr[i-1];
            break;
            }
        }
        long long total=1LL*n*(n+1)/2;
        long long sum=0;
        for(int x : arr){
            sum+=x;
        }
        int missing = total - (sum-repeating);
        return {repeating , missing};
        
        
    }
};