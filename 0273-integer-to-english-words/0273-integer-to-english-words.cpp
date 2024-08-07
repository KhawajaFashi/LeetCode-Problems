class Solution {
public:
    string numberToWords(int num) {
        const vector<string> ones = {
            "",        "One",     "Two",       "Three",    "Four",
            "Five",    "Six",     "Seven",     "Eight",    "Nine",
            "Ten",     "Eleven",  "Twelve",    "Thirteen", "Fourteen",
            "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        const vector<string> tens = {"",       "",      "Twenty",       "Thirty",       "Forty",       "Fifty",       "Sixty",       "Seventy",       "Eighty",       "Ninety"};
        const vector<string> thousands = {"", "Thousand", "Million", "Billion"};
        string res = "";
        int index = 0;
        if (num == 0)
            return "Zero";
        if (num < 20) {
            return ones[num];
        }
        while (num > 0) {
            if (num % 1000 != 0) {
                string group = "";
                int part = num % 1000;
                if (part >= 100) {
                    group += ones[part / 100] + " Hundred ";
                    part %= 100;
                }
                if (part >= 20) {
                    group += tens[(part / 10)] + " ";
                    part %= 10;
                }
                if (part > 0)
                    group += ones[part] + " ";
                group += thousands[index] + " ";
                res = group + res;
            }
            num /= 1000;
            index++;
        }
        return res.substr(0, res.find_last_not_of(" ") + 1);
    }
};