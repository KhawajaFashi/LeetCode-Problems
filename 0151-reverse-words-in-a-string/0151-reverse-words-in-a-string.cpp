class Solution {
public:
    string reverseWords(string s) {
        vector<int> spaces;
        stack<string> arr;
        for (int i = 0; i < s.length() && s.length() > 1; i++) {
            if (s[i] == ' ' && s[i + 1] == ' ') {
                s.erase(i, 1);
                i--;
            }
        }
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ' && (i == 0 || i == s.length() - 1)) {
                s.erase(i, 1);
                i--;
            }
        }
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ' && (i != 0 && i != s.length() - 1)) {
                spaces.push_back(i);
            }
        }
        spaces.push_back(s.length() - 1);
        string newString, *stack_s;
        stack_s = new string[spaces.size()];
        int end = s.find(' ');
        int k = 0;
        for (int i = 0; i < spaces.size(); i++) {
            stack_s[i] = s.substr(k, end - k);
            k = end + 1;
            end = s.find(' ', k);
            arr.push(stack_s[i]);
        }
        int f = arr.size();
        for (int i = 0; i < f; i++) {
            newString += arr.top();
            arr.pop();
            if (i != f - 1)
                newString += " ";
        }
        return newString;
    }
};