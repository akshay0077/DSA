#include <bits/stdc++.h>
using namespace std;
int getPivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;

    while(s < e)
    {
        int mid = s + (e - s)/2;
        if(arr[mid] >= arr[0])
        {
            s = mid + 1;
        }else{
            e = mid;
        }
    }
    return s;
}
int binarySearch(int arr[], int size, int key, int start, int end)
{
    int high = end;
    int low = start;
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
    int arr[7] = {4,5,6,7,1,2,3};
    int size = 7;
    int key = 2;
    int pivot = getPivot(arr, size);
    if(arr[pivot] == key)
    {
        cout <<  pivot << endl;
    }else if(arr[pivot] < key)
    {
       cout << binarySearch(arr,size, key, arr[0], pivot - 1) << endl;
    }else{
        cout << binarySearch(arr,size, key, pivot, size - 1) << endl;
    }
   
}