class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans;
        int size = s.length();
        int pos = INT_MAX;
        for (int i = 0; i < size; i++) {
            if (s[i] == c)
                pos = i;
            ans.push_back(abs(pos - i));
        }
        for (int i = size - 1; i >= 0; i--) {
            if (s[i] == c)
                pos = i;
            ans[i] = min(ans[i], abs(pos - i));
        }
        return ans;
    }
};