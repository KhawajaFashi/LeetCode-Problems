class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack == needle)
            return 0;
        int size = needle.size();
        if(size > haystack.size())
        return -1;
        for (int i = 0; i < haystack.size() && size + i < haystack.size();
             i++) {
            string word = haystack.substr(i, size);
            if (word == needle)
                return i;
        }
        if (haystack.substr(haystack.size() - size, size) == needle)
            return haystack.size() - size;
        return -1;
    }
};