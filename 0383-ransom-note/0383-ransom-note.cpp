class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> mp;
        for (auto a : ransomNote)
            mp[a]++;

        for (auto a : magazine) {
            if (mp[a] >= 1)
                mp[a]--;
            if (mp[a] == 0)
                mp.erase(a);
        }
        if (mp.size() > 0)
            return false;
        return true;
    }
};