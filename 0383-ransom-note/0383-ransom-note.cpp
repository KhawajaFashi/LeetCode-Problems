class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> alpha(26, 0);
        for (auto a : ransomNote) {
            int index = int(a - 'a');
            alpha[index]++;
        }
        for (auto a : magazine) {
            int index = int(a - 'a');
            if (alpha[index] >= 1)
                alpha[index]--;
        }
        for (auto a : alpha) {
            if (a >= 1)
                return false;
        }
        return true;
    }
};