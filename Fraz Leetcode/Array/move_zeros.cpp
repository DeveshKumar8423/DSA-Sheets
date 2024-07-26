/*
non zero is on 0 and run a loop on nums array
if(nums[j] != 0)
then swapping with nonzero otherwise not
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     //shift all non zero element to the left
     int nonzero = 0;
     for(int j=0 ; j<nums.size() ; j++){
        if(nums[j] != 0){
            swap(nums[j] , nums[nonzero]);
            nonzero++;
        }
     }   
    }
};