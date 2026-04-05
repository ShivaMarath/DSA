class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int start = 0;
        int end = nums.size() - 1;
        int firstocc = -1;
        int lastocc = -1;
        while(start<=end){
            int mid = (start + end)/2;
            if(nums[mid] == target){
                firstocc = mid;
                end = mid-1;
            }else if(nums[mid] < target){
                start = mid+1;
            }else if(nums[mid] > target){
                end = mid-1;
            }

            mid = (start+end)/2;
        }
        start = 0;
        end = nums.size() - 1;

          while(start<=end){
            int mid = (start + end)/2;
            if(nums[mid] == target){
                lastocc = mid;
                start = mid+1;
            }else if(nums[mid] < target){
                start = mid+1;
            }else if(nums[mid] > target){
                end = mid-1;
            }

            mid = (start+end)/2;
        }
        ans.push_back(firstocc);
        ans.push_back(lastocc);
        return ans;
    }
};