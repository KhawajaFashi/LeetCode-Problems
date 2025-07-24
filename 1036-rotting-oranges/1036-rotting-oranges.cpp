class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        vector<vector<int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        queue<pair<int, pair<int, int>>> q;
        int freshCount = 0, maxTime = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) {
                    q.push({0, {i, j}});
                    visited[i][j] = true;
                } else if (grid[i][j] == 1)
                    freshCount++;
            }
        }

        while (!q.empty()) {
            auto [time, pos] = q.front();
            q.pop();

            int x = pos.first;
            int y = pos.second;
            maxTime = max(maxTime, time);

            for (auto& dir : dirs) {
                int nx = x + dir[0];
                int ny = y + dir[1];

                if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
                    if (!visited[nx][ny] && grid[nx][ny] == 1) {
                        visited[nx][ny] = true;
                        q.push({time + 1, {nx, ny}});
                        freshCount--;
                    }
                }
            }
        }

        return freshCount == 0 ? maxTime : -1;
    }
};