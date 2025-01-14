// shortest paths-unweighted graph---->bfs(very standard)
// but usually 1 source node---minimum distance from that particular node
// but here multiple source nodes
// so push all of them first
// WHY???
// WHEN WE POP AND EXPLORE WE ARE DOING SO IN INCREASING ORDER OF THEIR LEVELS
// SO WHEN WE DISCOVER A NODE FIRST WE ARE EXPLORING IT FROM MINI POSSIBLE LEVEL
// NODE THAT IT IS CONNECTED TO first the source..then level 1 nodes..then level
// 2 and so on here the case is there are many level 0 nodes so push all of them
// first!!!

class Solution {
public:
    bool isvalid(int i, int j, int m, int n)
    {
        if (i == m || j == n || j < 0 || i < 0)
            return false;
        return true;
    }

    vector<vector<int>> updateMatrix(vector<vector<int>> &matrix)
    {
        queue<pair<int, int>> q;
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dis(m, vector<int>(n, -1));
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    dis[i][j] = 0;
                    q.push({i, j});
                }
            }
        int x, y;
        while (!q.empty())
        {
            auto p = q.front();
            x = p.first;
            y = p.second;
            q.pop();
            if (visited[x][y])
                continue;
            if (isvalid(x + 1, y, m, n) && dis[x + 1][y] == -1)
            {
                dis[x + 1][y] = dis[x][y] + 1;
                q.push({x + 1, y});
            }
            if (isvalid(x - 1, y, m, n) && dis[x - 1][y] == -1)
            {
                dis[x - 1][y] = dis[x][y] + 1;
                q.push({x - 1, y});
            }
            if (isvalid(x, y + 1, m, n) && dis[x][y + 1] == -1)
            {
                dis[x][y + 1] = dis[x][y] + 1;
                q.push({x, y + 1});
            }
            if (isvalid(x, y - 1, m, n) && dis[x][y - 1] == -1)
            {
                dis[x][y - 1] = dis[x][y] + 1;
                q.push({x, y - 1});
            }
            visited[x][y] = true;
        }
        return dis;
    }
};