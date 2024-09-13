class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> pre(n);
        int pre_xor = 0;
        for (int i = 0; i < n; i++) {
            pre_xor = arr[i] ^ pre_xor;
            pre[i] = pre_xor;
        }
        vector<int> res(queries.size());
        for (int k = 0; k < queries.size(); k++) {
            int i = queries[k][0];
            int j = queries[k][1];
            if (i == 0)
                res[k] = pre[j];
            else
                res[k] = pre[j] ^ pre[i - 1];
        }
        return res;
    }
};