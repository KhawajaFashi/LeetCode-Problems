// class Solution {
// public:
//     string removeDuplicates(string s, int k) {
//         vector<pair<char, int>> stack; // to store character and its count

//         for (char c : s) {
//             if (!stack.empty() && stack.back().first == c)
//                 stack.back().second++;
//              else
//                 stack.push_back({c, 1});
//             if (stack.back().second == k)
//                 stack.pop_back(); // remove if we hit k consecutive
//                 duplicates
//         }
//         string result = "";
//         for (auto p : stack)
//             result.append(p.second, p.first); // reconstruct the string
//         return result;
//     }
// };
class Solution {
public:
    string removeDuplicates(string s, int k) {
        int i = 0, j = 1, c = 1;
        while (j < s.size()) {
            if (s[i] == s[j] && c != k) {
                c++;
                j++;
            } else if (c == k) {
                s.erase(i, k);
                if (i - k + 1 <= 0)
                    i = 0;
                else
                    i = i - k + 1;
                j = i + 1;
                c = 1;
            } else {
                c = 1;
                i = j;
                j++;
            }
        }
        if (s.size() - 1 - i == k - 1)
            s.erase(i, k);
        return s;
    }
};