
2540. Minimum Common Value

class Solution {
public:
    bool bs(vector<int>& arr, int l, int r, int k) {
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (arr[mid] == k) {
                return true;
            }
            if (arr[mid] < k) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return false;
    }

    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int ans = -1;
        if (n > m) {
            for (auto it : nums2) {
                if (bs(nums1, 0, n - 1, it)) {
                    ans = it;
                    break;
                }
            }
        } else {
            for (auto it : nums1) {
                if (bs(nums2, 0, m - 1, it)) {
                    ans = it;
                    break;
                }
            }
        }
        return ans;
    }
};
