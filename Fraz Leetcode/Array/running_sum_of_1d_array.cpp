/*
suppose a array [1,2,3,4]
we have to do this [1,1+2,1+2+3,1+2+3+4]
we have to run a for loop and add prev sum in current
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            nums[i] = nums[i - 1] + nums[i];
        }
        return nums;
    }
};