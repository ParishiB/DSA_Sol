// In a town, there are n people labeled from 1 to n. There is a rumor that one of these people is secretly the town judge.

// If the town judge exists, then:

// The town judge trusts nobody.
// Everybody (except for the town judge) trusts the town judge.
// There is exactly one person that satisfies properties 1 and 2.

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1) return 1;
        unordered_map<int,int>m;
        for(auto x:trust){
            m[x[0]]-=1;
            m[x[1]]+=1;
        }
        for(auto x:m){
            if(x.second==n-1) return x.first;
        }
        return -1;
    }
};
