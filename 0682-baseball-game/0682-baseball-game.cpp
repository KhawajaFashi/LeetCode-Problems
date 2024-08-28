class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int a, b;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] != "+" && operations[i] != "D" &&
                operations[i] != "C") 
                st.push(stoi(operations[i]));
            else {
                if (operations[i] == "C")
                    st.pop();
                else if (operations[i] == "D") {
                    b = st.top();
                    st.push(b * 2);
                } else if (operations[i] == "+") {
                    a = st.top();
                    st.pop();
                    b = st.top();
                    st.push(a);
                    st.push(a + b);
                }
            }
        }
        int sum = 0;
        if (!st.empty()) {
            while (!st.empty()) {
                sum += st.top();
                st.pop();
            }
        }
        return sum;
    }
};