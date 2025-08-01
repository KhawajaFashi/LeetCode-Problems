class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return s == t;
        unordered_map<char, int> mp;
        if (s.length() != t.length())
            return false;
        for (char c : s)
            mp[c]++;
        for (char c : t) {
            if (mp.count(c) > 0)
                mp[c] -= 1;
            if (mp[c] == 0)
                mp.erase(c);
        }
        if (mp.size())
            return false;
        return true;
    }
};