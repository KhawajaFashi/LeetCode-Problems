class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        // vector<int> pre(n);
        vector<int> ans;
        // int pre_xor = 0;
        // for (int xor : arr) {
        //     pre_xor = xor ^ pre_xor;
        //     ans.push_back(pre_xor);
        // }
        int xoring = 0;
        for (int i = 0; i < queries.size(); i++) {
            for (int j = queries[i][0]; j <= queries[i][1]; j++) {
                xoring = xoring ^ arr[j];
            }
            ans.push_back(xoring);
            xoring = 0;
        }
        return ans;
    }
};