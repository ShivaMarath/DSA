class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        long long presum = 0;
        int cnt = 0;
        int rem = 0;
        unordered_map<int , int>mpp;
        mpp[0] = 1;
        for(int i = 0;i<nums.size();i++){
            presum +=nums[i];
            rem = (int)(presum % k);
            if (rem < 0) rem += k; 
             
       if(mpp.find(rem) != mpp.end() ){
                cnt+=mpp[rem];
            }
            mpp[rem]++;
        } 
        return cnt;
    }
};