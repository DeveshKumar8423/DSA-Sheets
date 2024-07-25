//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int firstOcc(int arr[], int n, int x) {
            int s = 0, e = n - 1;
            int ans = -1;
            
            while (s <= e) {
                int mid = s + (e - s) / 2;
                
                if (arr[mid] == x) {
                    ans = mid;
                    e = mid - 1; // for left occurrence you go in left part
                } else if (x > arr[mid]) { // Right part
                    s = mid + 1;
                } else { // Left Part
                    e = mid - 1;
                }
            }
            
            return ans;
        }
        
        int lastOcc(int arr[], int n, int x) {
            int s = 0, e = n - 1;
            int ans = -1;
            
            while (s <= e) {
                int mid = s + (e - s) / 2;
                
                if (arr[mid] == x) {
                    ans = mid;
                    s = mid + 1; // for right occurrence you go in right part
                } else if (x > arr[mid]) { // Right part
                    s = mid + 1;
                } else { // Left Part
                    e = mid - 1;
                }
            }
            
            return ans;
        }
    
        vector<int> find(int arr[], int n, int x) {
            vector<int> ans;
            ans.push_back(firstOcc(arr, n, x));
            ans.push_back(lastOcc(arr, n, x));
            return ans;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends