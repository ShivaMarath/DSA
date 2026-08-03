class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x = 2;
        if(nums.size() < 2)return nums.size();
        for(int i = 2; i<nums.size(); i++){
            if(i<2 || nums[i] != nums[x-2]){
                nums[x] = nums[i];
                x++;
            }
        }
        return x;
    }
};