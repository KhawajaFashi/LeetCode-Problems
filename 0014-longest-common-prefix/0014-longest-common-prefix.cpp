// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         string res, ans = strs[0], result = ans;
//         for (int i = 1; i < strs.size(); i++) {
//             for (int j = 0; j < strs[i].length(); j++) {
//                 if (ans[j] != strs[i][j])
//                     break;
//                 res += ans[j];
//             }
//             result = res;
//             ans = res;
//             res = "";
//         }
//         return result;
//     }
// };
class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string ans = "";
        sort(v.begin(), v.end());
        int n = v.size();
        string first = v[0], last = v[n - 1];
        for (int i = 0; i < min(first.size(), last.size()); i++) {
            if (first[i] != last[i]) {
                return ans;
            }
            ans += first[i];
        }
        return ans;
    }
};