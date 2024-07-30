/*
approach 1 o(n2)
*/

class Solution {
  public:
    int getPairsCount(const vector<int>& arr, int k) {
        int count = 0;
        for(int i = 0; i<arr.size() ; i++){
            for(int j = i+1 ; j<arr.size() ; j++){
                if(arr[i] + arr[j] == k){
                    count++;
                }
            }
        }
        return count;
    }
};

/*
approach 2 using hashmap
*/

class Solution {
  public:
    int getPairsCount(const vector<int>& arr, int k) {
        map<int,int> mpp;
        int count = 0;// create the map
        int n =arr.size();
        for(int i=0 ; i<n ; i++){
            int num = arr[i]; // first value 
            int more = k - num; // second by sub by k-num
            if(mpp[more]){//finding that value in the map if it is there
                count+=mpp[more]; // we add freq of that in answer
            }
            mpp[arr[i]]++; //otherwise store that value in map along with index
        }
        return count;
    }
};