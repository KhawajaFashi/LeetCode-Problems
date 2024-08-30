class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> arr;
        for (int ast : asteroids) {
            while (!arr.empty() && ast < 0 && arr.back() > 0) {
                int diff = ast + arr.back();
                if (diff > 0)
                    ast = 0;
                else if (diff < 0)
                    arr.pop_back();
                else {
                    ast = 0;
                    arr.pop_back();
                }
            }
            if (ast != 0)
                arr.push_back(ast);
        }
        return arr;
    }
};