// The given solution below is giving TLE.

class Solution {
public:
   vector<int>solve_right(vector<int>&height){
        int n = height.size();
        vector<int>ans;
        stack<int>st;

        st.push(height[n-1]);
        ans.push_back(-1);
        for(int  i = n - 2 ; i >= 0 ; i--){

          while(!st.empty() && st.top() <= height[i]){
            st.pop();
          }

          if(st.empty())ans[i] = -1;
          else{
            ans[i] = st.top();
          }

          st.push(height[i]);

        }

        return ans;

   }


    vector<int>solve_left(vector<int>&height){
      int n = height.size();
        vector<int>ans;
        stack<int>st;

        st.push(height[0]);
        ans.push_back(-1);
        for(int  i = 1 ; i < n ; i++){

          while(!st.empty() && st.top() <= height[i]){
            st.pop();
          }

          if(st.empty())ans[i] = -1;
          else{
            ans[i] = st.top();
          }

          st.push(height[i]);

        }

        return ans;
    
    }


   

   int trap(vector<int>& height) {
    int n = height.size();
    if (n < 2) 
        return 0;

    vector<int> left = solve_left(height);
    vector<int> right = solve_right(height);

    int trappedWater = 0;
    for (int i = 0; i < n; i++) {
        trappedWater += min(left[i], right[i]) - height[i];
    }
    
    return trappedWater;
}

};
