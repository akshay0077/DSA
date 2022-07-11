#include <bits/stdc++.h>
using namespace std;

int floor_srt_arr(vector<int> ans, int key)
{
    int s = 0;
    int e = ans.size() - 1;
    int res = -1;

    while(s <= e)
    {
        int mid = s + (e - s)/2;

        if(ans[mid] == key)
        {
            // it's return to position of mid
            return mid;
        }else if(key > ans[mid])
        {
            res = ans[mid];
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }
    return res;
}
int main()
{
    vector<int> ans = {2,4,10,10,10,18,20};
    int key = 20;
    cout << floor_srt_arr(ans, key) << endl;
}