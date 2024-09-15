class Solution {
public:
    int findTheLongestSubstring(string s) {
        unordered_map<int, int> m{{0, -1}};
        int res = 0, n = s.length(), cur = 0;
        for (int i = 0; i < n; i++) {
            cur ^= 1 << string("aeiou").find(s[i]) + 1 >> 1;
            if (!m.count(cur)) m[cur] = i;
            res = max(res, i - m[cur]);
        }
        return res;
    }
    // int findTheLongestSubstring(string s) {
    //     int n = s.length();
    //     int maxLen = 0;
    //     map<char, int> mp;
    //     for (int i = 0; i < n; i++) {
    //         if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
    //             s[i] == 'u')
    //             mp[s[i]]++;
    //     }
    //     map<char, int> mps = mp;
    //     for (int i = 0; i < n; i++) {
    //         // cout << mp['o'] << "    " << i << endl;
    //         for (int j = n - 1; j >= i; j--) {
    //             if ((mp['a'] % 2 == 0) && (mp['e'] % 2 == 0) &&
    //                 (mp['i'] % 2 == 0) && (mp['o'] % 2 == 0) &&
    //                 (mp['u'] % 2 == 0)) {
    //                 maxLen = max(maxLen, j - i + 1);
    //                 // cout << i << "       " << j << "      " << j - i << endl;
    //             }
    //             mp[s[j]]--;
    //         }
    //         mps[s[i]]--;
    //         mp = mps;
    //     }
    //     return maxLen;
    // }
};