2864. Maximum Odd Binary Number

class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();

        int cnt1 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1')
                cnt1++;
        }

        string res(n, '0');
        res[n - 1] = '1';
        for (int i = 0; i < cnt1 - 1; i++)
            res[i] = '1';

        return res;
    }
};
