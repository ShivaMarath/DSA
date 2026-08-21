class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<long long, long long>mpp;
        mpp[0] = 1;
        long long presum = 0;
        long long rem = 0;
       int cnt = 0;
        for(int i = 0;i<nums.size();i++ ){
            presum += nums[i];
            rem = presum-k;
            if( mpp.find(rem)!=mpp.end()){
                cnt+=mpp[rem];
                
            }
            mpp[presum]++;
        }
        return cnt;
    }
};