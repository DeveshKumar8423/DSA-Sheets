/*
approach 1 
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums){

        sort(nums.begin() , nums.end());
        int ans = 0;
        for(int i=0 ; i<nums.size()-1 ; i++){
            if(nums[i] == nums[i+1]) ans = nums[i+1];
        }
        return ans;

    }
};

/*
approach 2
*/