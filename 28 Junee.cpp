// wrong solution
class Solution {
public:
    map<int,int>mp;
    bool comp (map<int,int>a , map<int,int>b){
       return a[0][second] > b[0][second];
    }
    bool present(vector<vector<int>>& roads , int x){
        for(int i = 0; i < roads.size(); i++){
            if(x == roads[i][0] || x == roads[i][1]){
                mp[x]++;
            }
        }
        return true;
    }

    long long maximumImportance(int n, vector<vector<int>>& roads) {
        for(int i = 0; i < n ; i++){
            if(present(roads,i)){
                mp[i]++;
            }
        }
        sort(mp.begin(),mp.end(),comp);
        int sum = 0;
        for(int i = 0; i < roads.size(); i++){
            if(mp.find(roads[i][0]) != mp.end()){
                sum += mp[roads[i][0]];
            }
             if(mp.find(roads[i][1]) != mp.end()){
                sum += mp[roads[i][1]];
            }
        }

        return sum;

    }
};


// right solution
class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        long res = 0, cost = 1;
        vector<int> conn(n, 0);
        for (auto road : roads) {
            conn[road[0]]++;
            conn[road[1]]++;
        }
        sort(conn.begin(), conn.end());
        for (auto con : conn) res += con * (cost++);
        return res;
    }
};
