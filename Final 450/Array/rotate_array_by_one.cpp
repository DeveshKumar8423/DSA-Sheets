class Solution {
  public:
    void rotate(vector<int> &arr){
        
        if(arr.empty()) return;
        
        int last = arr[arr.size() - 1];
        
        for (int i = arr.size() - 1; i > 0; --i){ // we have to move elements rightwise
            arr[i] = arr[i - 1];
        }
        
        arr[0] = last;
        
    }
};