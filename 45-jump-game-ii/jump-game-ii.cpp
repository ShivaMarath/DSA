class Solution {
public:
    int jump(vector<int>& nums) {
        int maxReach = 0;      // farthest index reachable overall
        int curEnd = 0;        // farthest index reachable with jumps used so far
        int jumps = 0;
        
        for (int i = 0; i < nums.size() - 1; i++) {
            maxReach = max(maxReach, i + nums[i]);
            
            if (i == curEnd) {          // we've explored everything in this "jump level"
                jumps++;
                curEnd = maxReach;      // commit to the best reach found in this level
            }
        }
        return jumps;
    }
};