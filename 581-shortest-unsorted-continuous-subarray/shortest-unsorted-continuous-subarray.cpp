class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();

        int left = -1, right = -1;

        int maxSoFar = nums[0];
        for (int i = 1; i < n; i++) {
            maxSoFar = max(maxSoFar, nums[i]);

            if (nums[i] < maxSoFar) {
                right = i;
            }
        }

        int minSoFar = nums[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            minSoFar = min(minSoFar, nums[i]);

            if (nums[i] > minSoFar) {
                left = i;
            }
        }

        if (right == -1) return 0;  
        return right - left + 1;
    }
};