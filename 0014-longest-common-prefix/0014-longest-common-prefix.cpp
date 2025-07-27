class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            string pre = "";
            for (int j = 0; j < prefix.size() && j < strs[i].size() &&
                            prefix[j] == strs[i][j]; j++)
                pre += prefix[j];

            prefix = pre.length() < prefix.length() ? pre : prefix;
        }
        return prefix;
    }
};