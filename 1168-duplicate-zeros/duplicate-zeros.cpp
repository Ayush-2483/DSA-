class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int zeros=0;
        for(int x : arr){
            if(x==0)
            zeros++;
        }
        int i=n-1;
        int j=n+zeros-1; // imaginary expanded array ka lst index hai
        while(i<j){
            if(j<n){
                arr[j]=arr[i];
            }
            if(arr[i]==0){
                j--;
                if(j<n)
                arr[j]=0;
            }
            i--;
            j--;
        }
        
    }
};
//Right se copy karo, zero mile toh 2 baar likho,
//aur sirf tab likho jab index real array ke andar ho.