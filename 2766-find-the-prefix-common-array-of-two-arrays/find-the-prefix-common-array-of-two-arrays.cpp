class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> C(n);
        unordered_map<int,int>freq;
        int count = 0;

        for(int i = 0;i<n;i++){
            freq[A[i]]++;
            if(freq[A[i]] == 2){ 
//bss yahi catch tha freq dono ki 2 hogi jb dono   me uss index tkk prefix me element present hoga tab 
                count++;
            } 

            freq[B[i]]++;
            if(freq[B[i]] == 2) {
                count++;
            }

            C[i] = count;
        }

        return C;
    }
};