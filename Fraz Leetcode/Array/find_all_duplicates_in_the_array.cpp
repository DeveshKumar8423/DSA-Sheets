class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> freq;

        for(int i:nums){
            freq[i]++;
        }
        for(auto pair : freq){
            if(pair.second > 1){
                ans.push_back(pair.first);
            }
        }

        return ans;
    }
};