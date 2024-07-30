/*
approach 1 brute force take two loops O(n)
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int target_sum = 0;
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1 ; j<nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return{i,j};
                }
            }
        }
        return {};
    }
};

/*
approach 2 using hashing O(n) if map complexity is O(1) if map is O(logn) then O(nlogn)

*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp; // create the map
        int n =nums.size();
        for(int i=0 ; i<n ; i++){
            int num = nums[i]; // first value 
            int moreneeded = target - num; // second by sub by k-num
            if(mpp.find(moreneeded) != mpp.end()){ //finding that value in the map if it is there
                return {mpp[moreneeded] , i}; //return that value
            }
            mpp[num] = i; //otherwise store that value in map along with index
        }
        return {-1,-1};
    }
};

/*
approach 3 using 2 pointer approach O(n) + O(nlogn) for sorting and Space is O(1) we are sorting using sort only
*/
string read(int n, vector<int> book, int target)
{
    int left = 0 , right = n-1;
    sort(book.begin() , book.end());

    while(left < right){
        int sum = book[left] + book[right];
        if(sum == target){
            return "YES";
        }
        else if(sum < target) left++;
        else right--;
    }
    return "NO";
}

