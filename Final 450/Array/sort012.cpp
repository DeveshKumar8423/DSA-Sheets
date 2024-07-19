/*
approach 1 using stl

1 copy array into vector
2 using sort from stl
3 copy back into original array

*/

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{ 
   vector<int> vec(arr, arr + n);
   sort(vec.begin(), vec.end());

   for (int i = 0; i < n; ++i)
      arr[i] = vec[i];
}

/*
approach 2 without using any sorting algo
*/

void sort012(int a[], int n)
{
    int s = 0;
    int e = n-1;
    
    // first we sort 0
    while(s <= e)
    {
        if(a[s] == 0)
        {
            s++;
        }
        else if(a[e] != 0)
        {
            e--;
        }
        else
        {
            int temp = a[s];
            a[s] = a[e];
            a[e] = temp;
        }
    }
    
    e = n-1;
    
    // 0's are sorted now we are sorting 1 and 2
    while(s <= e)
    {
        if(a[s] == 1)
        {
            s++;
        }
        else if(a[e] == 2)
        {
            e--;
        }
        else
        {
            int temp = a[s];
            a[s] = a[e];
            a[e] = temp;
        }
    }
}

/*
approach 3 using dnf sort (dutch national flag)
low placed at 1's starting
mid placed at unknown starting
high placed at 2's starting

In this sort we have to low our unknown region and placing elements in 
0, 1 and 2 region.
which mid == high (unknown region is vanished)


Time complexity O(n)
    In each operation either mid gets incremented 
    or high gets decremented
*/

void sort012(int a[], int n)
    {
        // dnf sort (dutch national flag)
        int low = 0;
        int mid = 0;
        int high = n-1;
        
        while(mid <= high){ //when mid == high means unknown elements are end now
            if(a[mid] == 0){
                swap(a[low] , a[mid]);
                low++;
                mid++;
                
            }
            else if(a[mid] == 1){
                mid++;
            }
            else{
                swap(a[mid] , a[high]);
                high--;
            }
        }
        
    }