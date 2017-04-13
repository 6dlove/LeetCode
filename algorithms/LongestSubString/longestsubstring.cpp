#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> dict(256, -1);
        int l = 0, b = 0;
        for (int i = 0; i < s.length(); i ++)
        {
            b = max(dict[s[i]] + 1, b);
            l = max(l, i - b + 1);
            dict[s[i]] = i;
        }
        return l;
    }
};