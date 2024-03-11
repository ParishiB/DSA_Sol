
791. Custom Sort String

class Solution {
public:
    string customSortString(string order, string s) {
         int n = order.length();
         int m = s.length();

         unordered_map<char,int> mp;

         for(auto it : s){
             
             mp[it]++;
         }

         string ans;

         for(int i = 0 ; i < n; i++){
             if(mp.find(order[i]) != mp.end()){
            
                 ans.append(mp[order[i]], order[i]);
              
                 mp.erase(order[i]);
             }
         }

         for(auto it : mp){
        
             ans.append(it.second, it.first);
         }

         return ans;
    }
};
