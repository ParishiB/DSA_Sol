class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0;
        int maxcnt = INT_MIN;
        for(auto it  : s){
            if(it == '('){
                cnt++;
                maxcnt = max(cnt,maxcnt);
            }else{
                cnt--;
            }

        }

        return maxcnt;
    }
};
