// class Solution {
// public:
//     int getLucky(string s, int k) {
//         // map<char, int> res;
//         string str="";
//         int sum = 0;
//         // for (int i = 1, j = 48; i <= 26; i++, j++)
//         //     res[char(j + '1')] = i;
//         for (int i = 0; i < s.length(); i++)
//             str +=to_string(s[i] - 'a' + 1);
//             // str += to_string(res[s[i]]);
//         for (int i = 0; i < k; i++) {
//             sum = 0;
//             for (int j = 0; j < str.length(); j++)
//                 sum += str[j] - '0';
//             str = to_string(sum);
//         }
//         return sum;
//     }
// };
class Solution {
public:
    int getLucky(string& s, int k) {
        int num = 0;
        // convert letters to digits
        for (char c : s) {
            int x = c - 'a' + 1;
            auto [quot, rem] = div(x, 10); // x may has 1~2 digits
//div(x, 10) first will return quotient and second value of pair will return remainder
            num += quot + rem;
        }
        //    cout<<num<<endl;
        if (k == 1)
            return num;
        k--;
        for (int x = num; x >= 10 && k > 0; k--) {
            for (num = 0; x > 0;) {
                auto [quot, rem] = div(x, 10);
                num += rem;
                x = quot;
            }
            //        cout<<"k="<<k<<", num="<<num<<endl;
            x = num;
        }
        return num;
    }
};