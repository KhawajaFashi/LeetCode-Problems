class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        queue<pair<int, int>> q;
        map<pair<int, int>, bool> visited;
        int islands = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == '1' && visited[{i, j}] == false) {
                    q.push({i, j});
                    islands++;
                }
                while (!q.empty()) {
                    auto element = q.front();
                    int i = element.first;
                    int j = element.second;
                    q.pop();
                    if (visited[element])
                        continue;
                    if (i + 1 < grid.size() && grid[i + 1][j] == '1' &&
                        !visited[{i + 1, j}])
                        q.push({i + 1, j});
                    if (i - 1 >= 0 && grid[i - 1][j] == '1' &&
                        !visited[{i - 1, j}])
                        q.push({i - 1, j});
                    if (j + 1 < grid[i].size() && grid[i][j + 1] == '1' &&
                        !visited[{i, j + 1}])
                        q.push({i, j + 1});
                    if (j - 1 >= 0 && grid[i][j - 1] == '1' &&
                        !visited[{i, j - 1}])
                        q.push({i, j - 1});
                    visited[element] = true;
                }
            }
        }
        return islands;
    }
};