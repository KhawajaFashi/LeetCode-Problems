class Solution {
public:
    int getLucky(string s, int k) {
        map<char, int> res;
        string str;
        int sum = 0;
        for (int i = 1, j = 48; i <= 26; i++, j++)
            res[char(j + '1')] = i;
        for (int i = 0; i < s.length(); i++) 
            str += to_string(res[s[i]]);
        for (int i = 0; i < k; i++) {
            sum = 0;
            for (int j = 0; j < str.length(); j++)
                sum += str[j] - '0';
            str = to_string(sum);
        }
        return sum;
    }
};