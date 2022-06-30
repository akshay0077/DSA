#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int high = size - 1;
    int low = 0;
    int mid = (low + high)/2;
   while(low <= high)
   {    
        // check to mid or key both same to return it
        if(arr[mid] == key)
        {
            return mid;
        }
        // goto left part of array
        else if(key < arr[mid])
        {
            high = mid - 1;
        }
        // goto right part of array
        else{
            low = mid + 1;
        }
     mid = (low + high)/2;
    }
    return -1;
}
int main()
{
    int arr1[5] = {5,10,55,76,81};
    int arr2[6] = {3,5,10,14,22,29};
    int key = 22;

     cout << binarySearch(arr1, 5, 76) << endl;
     cout << binarySearch(arr2, 6, 5) << endl;
    
    
}