class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int prod = 1;
        for(int i=0 ; i<nums.size();i++){
            for(int j=i ; j<nums.size(); j++){
                int prod = max(i*j , prod);
            }
        }
        return prod;

    }
};