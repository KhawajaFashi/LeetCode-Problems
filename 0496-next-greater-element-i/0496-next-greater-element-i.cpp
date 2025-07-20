class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> ngeMap;
        stack<int> st;
        for (int i = nums2.size() - 1; i >= 0; --i) {
            int curr = nums2[i];

            while (!st.empty() && st.top() <= curr)
                st.pop();

            if (!st.empty())
                ngeMap[curr] = st.top();
            else
                ngeMap[curr] = -1;
            st.push(curr);
        }

        vector<int> res(nums1.size());
        for (int i = 0; i < nums1.size(); ++i)
            res[i] = ngeMap[nums1[i]];

        return res;
    }
};