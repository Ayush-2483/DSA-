class Solution {
public:
    int earliestFinishTime(vector<int>& ls, vector<int>& ld, vector<int>& ws,vector<int>& wd) {
        int n = ls.size(), m = ws.size();
        int ans = INT_MAX;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int lf = ls[i] + ld[i];
                int wf = ws[j] + wd[j];

                ans = min(ans,
                          min(max(ws[j], lf) + wd[j],
                              max(ls[i], wf) + ld[i]));
            }
        }
        return ans;
    }
};