// class Solution {
// public:
//     int minBitFlips(int start, int goal) {
//         return __builtin_popcount(start^goal);
//     }
// };
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;
        int res = start ^ goal;
        while (res != 0) {
            count += res & 1;
            res = res >> 1;
        }
        return count;
    }
};