/*
approach 1 using sort function 

dis = -ve number is only on left side always
for -ve number to be on right side you can use reverse also
*/

#include<iostream>
#include<vector>
#include<algorithm> //for using sort function
using namespace std;

int sorting(vector<int> &arr){
    sort(arr.begin() , arr.end());
    //reverse(arr.begin(),arr.end());
}

int main(){

    vector<int> arr = {-2,-4,5,-8,0,1,2,-4,9,6,8,-9};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array


    sorting(arr);

    for(int i : arr){
        cout<<i <<" ";
    }


    return 0;

}