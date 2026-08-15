class Solution {
public:
    int hIndex(vector<int>& citations) {
        int maxcita = 0;
        // if(citations.size() ==1)return citations[0];
        for(int i = 0; i<=citations.size(); i++){
            int counter = 0;
            for(int j = 0; j<citations.size();j++){
                if(citations[j]>=i){
                    counter++;
                }
            }
            if(counter >= i){
                maxcita = max(maxcita , i);
            }
        }
        return maxcita;
    }
};