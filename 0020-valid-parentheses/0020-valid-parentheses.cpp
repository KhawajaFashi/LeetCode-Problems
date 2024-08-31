class Solution {
public:
    bool isValid(string s) {
        string stk;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[')
                stk.push_back(ch);
            else if(stk.empty()&&(ch == ')' || ch == '}' || ch == ']'))
            return false;
            else if (stk.back() == '(' && ch == ')' ||
                     stk.back() == '{' && ch == '}' ||
                     stk.back() == '[' && ch == ']')
                stk.pop_back();
            else
                return false;
        }
        if (!stk.empty())
            return false;
        return true;
    }
};