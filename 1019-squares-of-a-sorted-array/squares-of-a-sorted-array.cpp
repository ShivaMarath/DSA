class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int left = 0;
        int right = n-1;
        int pos = n-1;
        while(left<=right){
            int leftSq = nums[left] * nums[left];
            int rightSq = nums[right] * nums[right];
            if(leftSq > rightSq){
                ans[pos--] = leftSq;
                left++;
            }else if(leftSq < rightSq){
                ans[pos--] = rightSq;
                right--;
            }else{
                ans[pos--] = rightSq;
                if (left != right) ans[pos--] = leftSq;
                left++;
                right--;
            }
        } return ans;
    }
};