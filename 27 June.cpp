class Solution {
public:
    int findCenter(vector<vector<int>>& v) {
        return (v[0][0]==v[1][0]||v[0][0]==v[1][1]) ? ( v[0][0]) :  v[0][1];
    }
};
