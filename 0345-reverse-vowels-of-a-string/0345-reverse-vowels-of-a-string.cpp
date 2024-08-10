class Solution {
public:
    string reverseVowels(string s) {
        string vowel = "aeiou";
        string vowel2 = "AEIOU";
        int i = 0, j = s.length() - 1;
        bool check, check1;
        while (i <= j) {
            check = false;
            check1 = false;
            for (int k = 0; k < vowel.length(); k++) {
                if (s[i] == vowel[k] || s[i] == vowel2[k])
                    check = true;
                if (s[j] == vowel[k] || s[j] == vowel2[k])
                    check1 = true;
            }
            if (check != true)
                i++;
            if (check1 != true)
                j--;
            if (check == true && check1 == true) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};