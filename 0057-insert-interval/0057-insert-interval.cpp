class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newI) {
        int i = 0;
        int n = intervals.size();
        vector<vector<int>> res;
        while (i < n && newI[0] > intervals[i][1]) {
            auto num = intervals[i];
            res.push_back(num);
            i++;
        }
        while (i < n && newI[1] >= intervals[i][0]) {
            auto num = intervals[i];
            newI[0] = min(num[0], newI[0]);
            newI[1] = max(num[1], newI[1]);
            i++;
        }
        res.push_back(newI);
        while (i < n) {
            auto num = intervals[i];
            res.push_back(num);
            i++;
        }
        return res;
    }
};