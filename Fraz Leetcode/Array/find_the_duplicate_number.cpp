/*
app 1 using o(n)
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
app 2 brute force o(n)
*/

    // 2 Loops
    public static int findDuplicate_2loops(int[] nums) {
        int len = nums.length;
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len; j++) {
                if (nums[i] == nums[j]) {
                    return nums[i];
                }
            }
        }

        return len;
    }


