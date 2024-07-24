/*
sort the array
majority element in the array aquires the middle position
retun the middle element
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};