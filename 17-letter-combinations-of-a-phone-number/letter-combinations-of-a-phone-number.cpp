class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> phone = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> res = {""};
        for (char d : digits) {
            vector<string> tmp;
            for (auto& s : res)
                for (char c : phone[d-'2'])
                    tmp.push_back(s + c);
            res = tmp;
        }
        return res;
    }
};