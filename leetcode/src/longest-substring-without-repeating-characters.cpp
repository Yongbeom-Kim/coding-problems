#include<unordered_map>
#include <algorithm>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        auto p1 = 0;
        auto p2 = 0;
        int max_len = 0;
        if (s.size() <= 1) {
            return s.size();
        }
        unordered_map<char, int> chars;
        chars[s[0]] = 0;
        while (p2+1 != s.size()) {
            char nextchar = s[p2+1];
            if (chars.find(nextchar) != chars.end() && chars[nextchar] >= p1) {
                p1 = chars[nextchar]+1;
            }
            chars[nextchar] = p2+1;
            ++p2;
            max_len = max(max_len, p2-p1+1);
        }
        return max_len;
    }
};