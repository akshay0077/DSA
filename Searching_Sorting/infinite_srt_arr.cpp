#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& ans,int s, int e ,int key)
{
    while(s <= e)
    {
        int mid = s + (e - s)/2;

        if(ans[mid] == key)
        {
            // it's return to position of mid
            return mid;
        }else if(key > ans[mid])
        {
           
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }
   return -1;
}

int main()
{
    vector<int> ans = {1,2,3,4,5,6,7,8,9,10,13,18,20};
    int key = 9;
    int s = 0;
    int e = 1;
    while(key > ans[e])
    {
        s = e;
        e = 2*e;
    }
    
    cout << binarySearch(ans,s,e,key) << endl;
}