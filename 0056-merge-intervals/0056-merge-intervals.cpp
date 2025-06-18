class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[0] < b[0];
             });
        int start, end, curr_end;
        vector<vector<int>> result;
        for (int i = 0; i < intervals.size(); i++) {
            start = intervals[i][0], curr_end = intervals[i][1];
            while (i < intervals.size() - 1 &&
                   curr_end >= intervals[i + 1][0]) {
                i++;
                if (curr_end < intervals[i][1])
                    curr_end = intervals[i][1];
            }
            end = curr_end;
            result.push_back({start, end});
        }

        return result;
    }
};