class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo = 1, hi = *max_element(piles.begin(), piles.end());
        
        while (lo < hi) {
            int mid = lo + (hi - lo) / 2;
            if (canFinish(piles, mid, h)) {
                hi = mid;       // mid works, try smaller
            } else {
                lo = mid + 1;   // mid too slow, need bigger k
            }
        }
        return lo;
    }
    
private:
    bool canFinish(vector<int>& piles, int k, int h) {
        long long hours = 0;
        for (int p : piles) {
            hours += (p + k - 1) / k;  // ceil division
        }
        return hours <= h;
    }
};