class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;  // Position to place the next non-zero element
        
        // First pass: copy all non-zero elements to the front
        for(int j = 0; j < nums.size(); j++) {
            if(nums[j] != 0) {
                nums[i] = nums[j];
                i++;
            }
        }
        
        // Second pass: fill remaining positions with zeros
        for(int l = i; l < nums.size(); l++) {
            nums[l] = 0;
        }
    }
};