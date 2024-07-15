#include<iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int k=0 ; k<n ; k++){
        cin>>arr[k];
    }
    
    int s=0;
    int e = n-1;

    while(s<=e){
        swap(arr[s] , arr[e]);
        s++;
        e--;
    }
    cout<<endl;

    for(int k=0 ; k<n ; k++){
        cout<<arr[k]<<" ";
    }



    return 0;
}