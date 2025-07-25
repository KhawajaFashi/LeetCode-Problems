class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        for (int i = 0; i < s.length(); i++) {
            string word = "";
            while (i < s.length() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            if (res.length() == 0)
                res = word;
            else if (word.length() != 0)
                res = word + ' ' + res;
        }
        return res;
    }
};