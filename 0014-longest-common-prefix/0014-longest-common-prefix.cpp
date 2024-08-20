class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res, ans = strs[0], result = ans;
        for (int i = 1; i < strs.size(); i++) {
            for (int j = 0; j < strs[i].length(); j++) {
                if (ans[j] != strs[i][j])
                    break;
                res += ans[j];
            }
            result = res;
            ans = res;
            res = "";
        }
        return result;
    }
};