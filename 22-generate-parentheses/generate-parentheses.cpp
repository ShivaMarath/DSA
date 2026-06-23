class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        function<void(string, int, int)> bt = [&](string cur, int open, int close) {
            if (cur.size() == 2 * n) { res.push_back(cur); return; }
            if (open < n) bt(cur + '(', open + 1, close);
            if (close < open) bt(cur + ')', open, close + 1);
        };
        bt("", 0, 0);
        return res;
    }
};