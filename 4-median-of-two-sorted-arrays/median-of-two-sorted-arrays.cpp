class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) swap(nums1, nums2);
        int m = nums1.size(), n = nums2.size();
        int lo = 0, hi = m;
        while (lo <= hi) {
            int i = (lo + hi) / 2;
            int j = (m + n + 1) / 2 - i;
            int maxL1 = (i == 0) ? INT_MIN : nums1[i-1];
            int minR1 = (i == m) ? INT_MAX : nums1[i];
            int maxL2 = (j == 0) ? INT_MIN : nums2[j-1];
            int minR2 = (j == n) ? INT_MAX : nums2[j];
            if (maxL1 <= minR2 && maxL2 <= minR1) {
                if ((m + n) % 2 == 0)
                    return (max(maxL1, maxL2) + min(minR1, minR2)) / 2.0;
                else
                    return max(maxL1, maxL2);
            } else if (maxL1 > minR2) hi = i - 1;
            else lo = i + 1;
        }
        return 0.0;
    }
};