class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;
        for (int ast : asteroids) {
            while (!stk.empty() && stk.top() > 0 && ast < 0) {
                int diff = stk.top() + ast;
                if (diff > 0)
                    ast = 0;
                else if (diff < 0)
                    stk.pop();
                else{
                    ast=0;
                    stk.pop();
                }
            }
            if (ast != 0)
                stk.push(ast);
        }
        vector<int> arr(stk.size());
        for (int i = arr.size() - 1; i >= 0; i--) {
            arr[i] = stk.top();
            stk.pop();
        }
        return arr;
    }
};
