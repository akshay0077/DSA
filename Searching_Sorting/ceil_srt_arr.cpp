#include <bits/stdc++.h>
using namespace std;

int ceil_srt_arr(vector<int> ans, int key)
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
            return ans[mid];
        }else if(key > ans[mid])
        {
           
            s = mid + 1;
        }else{
            res = ans[mid];
            e = mid - 1;
        }
    }
    return res;
}
int main()
{
    vector<int> ans = {1, 2, 8, 10, 10, 12, 19};
    int key = 1;
    cout << ceil_srt_arr(ans, key) << endl;
}