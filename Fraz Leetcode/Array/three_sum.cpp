/*
approach 1 brute force O(n)
using three for loops and check three sum = 0 or not
to manage with duplicate combination we use set here
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<vector<int>> set;
        for(int i=0 ; i<nums.size()-2 ; i++){
            for(int j=i+1 ; j<nums.size()-1 ; j++){
                for(int k=j+1 ; k<nums.size() ; k++){
                    if(nums[i] + nums[j] + nums[k] == 0 &&
                       i != j && i != k && j != k){
                        set.insert({nums[i] , nums[j] , nums[k]});
                    }
                }
            }
        }
        for(auto i : set){
            ans.push_back(i);
        }
        return ans;
    }
};

/*
approach 2 using two pointer approach and converting it to the two sum problem O(n2)
a + b + c = 0
to convert it to the two sum 
b + c = 0-a
we fix a 

*/