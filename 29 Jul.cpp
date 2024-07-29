class Solution {
public:
    bool check(vector<int> v) {
        if (v.size() != 3) return false;

        bool isIncreasing = (v[0] < v[1]) && (v[1] < v[2]);
        bool isDecreasing = (v[0] > v[1]) && (v[1] > v[2]);

        return isIncreasing || isDecreasing;
    }

    void solve(int index, int n, vector<int>& rating, int& cnt, vector<int> v) {
        if (v.size() == 3) {
            if (check(v)) {
                cnt++;
            }
            return;
        }
        if (index == n) {
            return;
        }
        
     
        v.push_back(rating[index]);
        solve(index + 1, n, rating, cnt, v);
        v.pop_back();
        solve(index + 1, n, rating, cnt, v);
    }

    int numTeams(vector<int>& rating) {
        int n = rating.size();
        int cnt = 0;
        vector<int> v;
        solve(0, n, rating, cnt, v);
        return cnt;
    }
};

//wrong sol
