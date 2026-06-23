class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int maxLen = 0, left = 0;
        for (int right = 0; right < s.size(); right++) {
            if (map.count(s[right]))
                left = max(left, map[s[right]] + 1);
            map[s[right]] = right;
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};