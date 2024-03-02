977. Squares of a Sorted Array

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n ; i++){
            nums[i] *= nums[i];
        }
        int left = 0;
        int right = nums.size() - 1;
        int i = nums.size() - 1;
        vector<int>ans(n);

        while( left <= right){
           if(nums[left] < nums[right]){
               ans[i--] = nums[right--];
           }else{
               ans[i--] = nums[left++];
           }
        }

        return ans;
    }
};
