#include <bits/stdc++.h>
using namespace std;

int nearly_srt_arr(vector<int>& arr, int key)
{
    int s = 0;
    int e = arr.size() - 1;
    int result = -1;
    while(s < e)
    {
        int mid = s + (e - s)/2;
        if(arr[mid] == key)
        {
            result = mid;
            break;
        }
        if(mid - 1 >= s && arr[mid - 1] == key)
        {
            result = mid - 1;
            break;
        }
        if(mid + 1 <= e && arr[mid + 1] == key)
        {
            result = mid + 1;
            break;
        }
        if(arr[mid - 2] < key)
        {
            s = mid + 2;
        }else {
            e = mid - 2;
        }
    }
    return result;
    
}
int main()
{
    vector<int> arr = {10, 3, 40, 20, 50, 80, 70};
    int key = 70;
    cout << nearly_srt_arr(arr, key) << endl;
}