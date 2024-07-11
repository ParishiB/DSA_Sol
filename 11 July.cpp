#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:

    void solve(string &s, int first, int last) {
        int i = first;
        int j = last;

        while (j > i) {
            if (s[i] == '(' || s[i] == ')') {
                i++;
            }
            if (s[j] == '(' || s[j] == ')') {
                j--;
            } else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
    }


    string reverseParentheses(string s) {
        int n = s.length();
        stack<int> st;


        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(i); 
            } else if (s[i] == ')') {
                int t = st.top();
                st.pop();
                solve(s, t + 1, i - 1);
            }
        }

 
        string result = "";
        for (int i = 0; i < n; i++) {
            if (s[i] != '(' && s[i] != ')') {
                result += s[i];
            }
        }

        return result;
    }
};
