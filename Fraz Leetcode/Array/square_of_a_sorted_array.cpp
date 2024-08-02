/*
doing square of the elements in the array and then using the sort function 
to sort the array in non decresing order
*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0 ; i<nums.size() ; i++){
            nums[i] = nums[i] * nums[i];
        }
        sort(nums.begin() , nums.end());
        return nums;
    }
};