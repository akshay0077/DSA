#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int s = 0, e = size-1;
    int ans = -1;
    int mid = s + (e - s)/2;

    while(s <= e)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            //for the First occu is always left size so e is minus from mid.
            e = mid - 1; 
        }else if(key > arr[mid])
        {
            s = mid + 1;
        }else{
             e = mid - 1; 
        }
        mid = s + (e - s)/2;
    } 
    return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int s = 0, e = size-1;
    int ans = -1;
    int mid = s + (e - s)/2;

    while(s <= e)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            //for the last occu is always right size so s is plus into mid.
            s = mid + 1; 
        }else if(key > arr[mid])
        {
            s = mid + 1;
        }else{
             e = mid - 1; 
        }
        mid = s + (e - s)/2;
    } 
    return ans;
}
int main()
{
    int arr[10] = {1,2,3,3,3,3,3,3,5,5};
    int key = 3;

    cout << "First Occurance is : " << firstOcc(arr, 10, key) << endl;
    cout << "Last Occurance is : " << lastOcc(arr, 10, key) << endl;


}