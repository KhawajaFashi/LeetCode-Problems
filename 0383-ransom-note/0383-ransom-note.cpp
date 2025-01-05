class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> alpha(26, 0);
        for (auto a : magazine) {
            int index = int(a - 'a');
            alpha[index]++;
        }
        for (auto a : ransomNote) {
            int index = int(a - 'a');
            if (alpha[index] == 0)
                return false;
            alpha[index]--;
        }
        return true;
    }
};