class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int pos = 0; pos < n - 2; pos++) {
            if (pos != 0 && nums[pos] == nums[pos - 1]) continue;

            int left = pos + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[pos] + nums[left] + nums[right];

                if (sum == 0) {
                    ans.push_back({nums[pos], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return ans;
    }
};