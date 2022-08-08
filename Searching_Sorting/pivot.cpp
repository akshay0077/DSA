#include <bits/stdc++.h>
using namespace std;
int getPivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s)/2;

    while(s < e)
    {
        // when your ele is lie in 1st line to plus mid into 1 s.
        if(arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        // when your ele is lie in 2nd line or ele is Pivot also to e = mid;
        else{
            e = mid;
        }
        mid = s + (e - s)/2;
    } 
    return s;
}
int getpivotEle(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s)/2;

    while(s < e)
    {
        
    }
}
int main()
{
    int arr[5] = {7, 9, 11, 12, 15};
    int size = 5;

    cout << " Pivot Element is : " << getPivot(arr, size) << endl;
}