class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int zero = 0;
        int mid = 0;
        int second = n-1;

        while( zero <= mid &&  mid <= second){
            if(nums[mid] == 0){
                swap(nums[mid],nums[zero]);
                mid++;
                zero++;
            }

            else if(nums[mid] == 2){
                swap(nums[mid],nums[second]);
                    second--;
                
            }
            else if(nums[mid] == 1){
                mid++;
            }
        }
    }
};
