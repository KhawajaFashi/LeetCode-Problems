class Solution {
public:
    int firstUniqChar(string s) {
        int charArr[26] = {0};
        int stringlen = (s.length());
        int i;

        for (i = 0; i < stringlen; ++i) {
            charArr[s[i] - 'a']++;
        }

        for (i = 0; i < stringlen; ++i) {
            if (charArr[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }

};
// auto init = []() {cin.tie(0); ios::sync_with_stdio(0); return 1;}();

// class Solution {
// public:
//     int firstUniqChar(string s) {
//         unordered_map<char, int> mp;
//         for (int a : s)
//             mp[a]++;
//         for (int i = 0; i < s.size(); i++)
//             if (mp[s[i]] == 1)
//                 return i;
//         return -1;
//     }
// };

// class Solution {
// public:
//     // solution by RITU RANJAN TIWARY
//     int covertCharIntoIndex(char c) { return 1 + (c - 'a'); }
//     int firstUniqChar(string s) {
//         // -2 means repeating char
//         // -1 means null, just like we consider null in DLL(eg.
//         // node->prev==null)
//         int prev[28], next[28], firstOccur[28];
//         int current, head, tail;
//         current = head = 0;
//         tail = 27;
//         prev[head] = -1;
//         next[head] = tail;
//         prev[tail] = head;
//         next[tail] = -1;
//         for (int i = 0; i < s.length(); i++) {
//             int tmp = covertCharIntoIndex(s[i]);
//             if (firstOccur[tmp] == 0)
//                 firstOccur[tmp] = i;
//             if (prev[tmp] == -2 && next[tmp] == -2)
//                 continue;
//             // first visit of particular char
//             if (prev[tmp] == 0 and next[tmp] == 0) {
//                 prev[tmp] = current;
//                 next[tmp] = next[current];
//                 next[current] = tmp;
//                 current = tmp;
//             } else {
//                 if (current == tmp)
//                     current = prev[tmp];
//                 int tmpNext = next[tmp];
//                 int tmpPrev = prev[tmp];
//                 prev[tmpNext] = tmpPrev;
//                 next[tmpPrev] = tmpNext;
//                 prev[tmp] = -2;
//                 next[tmp] = -2;
//                 cout << next[head] << endl;
//             }
//         }
//         if (next[head] == 27)
//             return -1;

//         return firstOccur[next[head]];
//     }
// };