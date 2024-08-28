class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int result, a, b;
        stack<int> st;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] != "+" && tokens[i] != "*" && tokens[i] != "-" &&
                tokens[i] != "/") {
                int num = 0;
                for (int j = 0; j < tokens[i].size(); j++) {
                    if (tokens[i][j] == '-')
                        continue;
                    if (tokens[i][0] == '-')
                        num = num * 10 - (tokens[i][j] - '0');
                    else
                        num = (num * 10) + (tokens[i][j] - '0');
                }
                st.push(num);
            } else if (tokens[i] == "+" || tokens[i] == "*" ||
                       tokens[i] == "-" || tokens[i] == "/") {
                b = st.top();
                st.pop();
                a = st.top();
                st.pop();
                if (tokens[i] == "+")
                    result = a + b;
                else if (tokens[i] == "*")
                    result = a * b;
                else if (tokens[i] == "-")
                    result = a - b;
                else if (tokens[i] == "/")
                    result = a / b;
                st.push(result);
            }
        }
        return st.top();
    }
};