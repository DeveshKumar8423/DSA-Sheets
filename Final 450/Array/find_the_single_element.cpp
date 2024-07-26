/*
app 1 using xor apporach but TLE Time Limit Exceeded
*/
#include<vector>

int getSingleElement(vector<int> &arr){
	int xxor = 0;
	for(int i=0 ; i<arr.size() ; i++){
		xxor = xxor ^ arr[i];
	}
	return xxor;
}

/*
app 2 using map but TLE
*/

#include<vector>
#include<map>
int getSingleElement(vector<int> &arr){
	//create map
	map<int,int> mpp;

	//adding values in map
	for(int i=0 ; i<arr.size() ; i++){
		mpp[arr[i]]++;
	}

	//if we found any value in map is 1 then print its key 
	for(auto i:mpp){
		if(i.second == 1) return i.first;
	}
}

/*
app 3 using binary search
*/

#include<vector>

int getSingleElement(vector<int> &arr){
	int left = 0, right = arr.size() - 1;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        // Check if mid is even or odd and adjust it to be even for comparison
        if (mid % 2 == 1) {
            mid--;
        }
        
        // Compare mid and mid + 1
        if (arr[mid] == arr[mid + 1]) {
            // Unique element is on the right side
            left = mid + 2;
        } else {
            // Unique element is on the left side
            right = mid;
        }
    }
    
    return arr[left];
}

