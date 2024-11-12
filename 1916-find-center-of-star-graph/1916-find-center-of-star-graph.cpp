class Solution {
public:
// edges = [[1,2],[5,1],[1,3],[1,4]]
// edges = [[1,2],[2,3],[4,2]]
    int findCenter(vector<vector<int>>& edges) {
        // int first = 0, second = 0, frequent;
        // for (auto i : edges) {
        //     for (auto j : i) {
        //         if (j == edges[0][0])
        //             first++;
        //         else if (j == edges[0][1])
        //             second++;
        //     }
        // }
        // if (first > second)
        //     frequent = edges[0][0];
        // else
        //     frequent = edges[0][1];
        // return frequent;
        return edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1] ? edges[0][0] : edges[0][1];
    }
};