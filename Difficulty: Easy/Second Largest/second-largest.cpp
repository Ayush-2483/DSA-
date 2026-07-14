class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n=arr.size();
        int largest=arr[0];
        int sec_largest=INT_MIN;
        for(int i=1;i<n;i++){
            if(arr[i]>largest){
                sec_largest=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && arr[i]>sec_largest){
                sec_largest=arr[i];
            }
        }
        if(sec_largest==INT_MIN) return -1;
        
        return sec_largest;
        
    }
};