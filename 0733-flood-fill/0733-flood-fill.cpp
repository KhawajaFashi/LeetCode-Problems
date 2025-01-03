class Solution {
public:
    void fill(vector<vector<int>>& image, int sr, int sc, int color,
              int first) {
        if (sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() ||
            image[sr][sc] == color || image[sr][sc] != first)
            return;
        image[sr][sc] = color;
        fill(image, sr + 1, sc, color, first);
        fill(image, sr - 1, sc, color, first);
        fill(image, sr, sc + 1, color, first);
        fill(image, sr, sc - 1, color, first);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int first_value = image[sr][sc];
        fill(image, sr, sc, color, first_value);
        // set<pair<int, int>> s;
        // s.insert({sr, sc});
        // while (!s.empty()) {
        //     pair<int, int> p = *(s.begin());
        //     int i = p.first;
        //     int j = p.second;
        //     if (s.count({i - 1, j}) == 0 && i - 1 >= 0 &&
        //         image[i - 1][j] != color && image[i - 1][j] == first_value)
        //         s.insert({i - 1, j});
        //     if (s.count({i + 1, j}) == 0 && i + 1 < image.size() &&
        //         image[i + 1][j] != color && image[i + 1][j] == first_value)
        //         s.insert({i + 1, j});
        //     if (s.count({i, j + 1}) == 0 && j + 1 < image[0].size() &&
        //         image[i][j + 1] != color && image[i][j + 1] == first_value)
        //         s.insert({i, j + 1});
        //     if (s.count({i, j - 1}) == 0 && j - 1 >= 0 &&
        //         image[i][j - 1] != color && image[i][j - 1] == first_value)
        //         s.insert({i, j - 1});
        //     image[i][j] = color;
        //     s.erase({i, j});
        // }
        return image;
    }
};