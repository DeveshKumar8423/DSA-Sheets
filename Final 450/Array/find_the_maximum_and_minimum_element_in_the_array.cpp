#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int k=0 ; k<n ; k++){
        cin>>arr[k];
    }
    
    int min=INT_MAX;
    int max=INT_MIN;

    for(int k=0 ; k<n ; k++){
        if(arr[k] < min)
            min = arr[k];
        if(arr[k] > max)
            max = arr[k];
    }

    cout<<"Min is "<<min<<endl;
    cout<<"Max is "<<max<<endl;

    return 0;
}