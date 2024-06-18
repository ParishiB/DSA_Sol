class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        sort(worker.begin() , worker.end());
        reverse(worker.begin() , worker.end());
        int totalprofit = 0 ;

        vector<pair<int , int>> c ;
        for(int i = 0 ; i < profit.size() ; i++){
            pair p(profit[i] , difficulty[i]);
            c.push_back(p);
        }

        sort(c.begin() , c.end());
        reverse(c.begin() , c.end());

        for(int i = 0 ; i < worker.size() ; i++){
            int x = worker[i];
            int  j = 0 ;
            while(j < c.size()){
                if(c[j].second <= x){
                    totalprofit += c[j].first ;
                    break;
                }
                j++;
            }
        }
        return totalprofit ;
    }

};
