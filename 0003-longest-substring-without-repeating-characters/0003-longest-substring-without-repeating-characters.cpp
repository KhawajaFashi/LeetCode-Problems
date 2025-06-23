class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int max_count = 0;
        for (int i = 0, j = 0; i < s.size(); i++) {
            if (mp.count(s[i]) == 0 || mp[s[i]] < j) {
                mp[s[i]] = i;
                max_count = max(max_count, i - j + 1);
            } else {
                j = mp[s[i]] + 1;
                mp[s[i]] = i;
            }
        }
        return max_count;
    }
};