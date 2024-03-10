349. Intersection of Two Arrays

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> seti1,seti2;
        for(int i=0;i<nums1.size();i++)seti1.insert(nums1[i]);
        for(int i=0;i<nums2.size();i++)if(seti1.find(nums2[i])!=seti1.end())seti2.insert(nums2[i]);
        for(auto x:seti2)ans.push_back(x);
        return ans;
    }
};
