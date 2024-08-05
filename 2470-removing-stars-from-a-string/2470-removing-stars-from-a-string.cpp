class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '*'){
            if (!st.empty())
                st.pop();
        }
        else
            st.push(s[i]);
    }
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (!st.empty()){
            s[i] = st.top();
            st.pop();
        }
        else
            s.pop_back();
    }
    reverse(s.begin(), s.end());
    return s;
    }
};