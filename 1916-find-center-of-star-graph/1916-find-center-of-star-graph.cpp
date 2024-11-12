class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int first = 0, second = 0, frequent;
        for (auto i : edges) {
            for (auto j : i) {
                if (j == edges[0][0])
                    first++;
                else if (j == edges[0][1])
                    second++;
            }
        }
        if (first > second)
            frequent = edges[0][0];
        else
            frequent = edges[0][1];
        return frequent;
    }
};