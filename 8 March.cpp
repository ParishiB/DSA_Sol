
3005. Count Elements With Maximum Frequency

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
      map<int,int>mp;
      int maxi = 0;
      int sum = 0;
      for(auto i : nums){
          mp[i]++;
          maxi = max(maxi,mp[i]);
      }

      for(auto i : mp){
          if(i.second == maxi) sum+= maxi;
      }

      return sum;

    }
};
