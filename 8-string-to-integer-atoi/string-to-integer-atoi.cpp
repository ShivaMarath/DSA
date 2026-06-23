class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1;
        long res = 0;
        while (s[i] == ' ') i++;
        if (s[i] == '-' || s[i] == '+') sign = (s[i++] == '+') ? 1 : -1;
        while (isdigit(s[i])) {
            res = res * 10 + (s[i++] - '0');
            if (res * sign > INT_MAX) return INT_MAX;
            if (res * sign < INT_MIN) return INT_MIN;
        }
        return res * sign;
    }
};