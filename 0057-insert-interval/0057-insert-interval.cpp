class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newI) {
        int i = 0;
        int n = intervals.size();
        vector<vector<int>> res;
        while (i < n) {
            auto num = intervals[i];
            if (newI[0] > num[1])
                res.push_back(num);
            else
                break;
            i++;
        }
        while (i < n) {
            auto num = intervals[i];
            if (i < n - 1 && newI[1] < intervals[i + 1][0]) {
                if (newI[1] < num[0]) {
                    res.push_back(newI);
                    break;
                }
                newI[0] = min(num[0], newI[0]);
                newI[1] = max(num[1], newI[1]);
                res.push_back(newI);
                i++;
                break;
            }
            else if(num[0]>newI[1])
            {
                res.push_back(newI);
                break;
            }
            newI[0] = min(num[0], newI[0]);
            newI[1] = max(num[1], newI[1]);
            i++;
        }
        if (i == n)
            res.push_back(newI);
        while (i < n) {
            auto num = intervals[i];
            res.push_back(num);
            i++;
        }
        return res;
    }
};