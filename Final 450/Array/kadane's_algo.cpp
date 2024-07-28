class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr) {
        
        int sum = 0;
        int maxi = arr[0]; // take maxi as first element
        
        //Kadane's algo
        for(int i = 0 ; i < arr.size() ; i++){
            
            sum = sum + arr[i];
            
            maxi = max(maxi , sum);
            
            if(sum < 0) sum = 0;
        }
        
        return maxi;
    }
};