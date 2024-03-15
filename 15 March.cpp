class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>res(nums.size());
        fill(res.begin(),res.end(),1);
        int a=1,b=1;
        for(int i=0;i<nums.size();i++)
        {
            res[i]=a;
            a*=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            res[i]*=b;
            b*=nums[i];
        }
        return res;
    }
};
