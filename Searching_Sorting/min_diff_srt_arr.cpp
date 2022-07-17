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
            return ans[mid];
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
    vector<int> ans = {4,6,10};
    int key = 7;
    cout << "Floor :"<< floor_srt_arr(ans, key) << endl;
    cout << "Ceil :"<< ceil_srt_arr(ans, key) << endl;

    if(abs(floor_srt_arr(ans, key) - key) < abs(ceil_srt_arr(ans, key) - key))
    {
        cout << floor_srt_arr(ans, key)  << endl;
    }else{
        cout << ceil_srt_arr(ans, key)  << endl;
    }
    // int answer = min(abs(floor_srt_arr(ans, key) - key), abs(ceil_srt_arr(ans, key) - key));
    // cout << ans[answer]  << endl;

    // if((floor_srt_arr(ans, key) - key) == -1)
    // {
    //     answer = abs(ceil_srt_arr(ans, key) - key);
    // }else if((ceil_srt_arr(ans, key) - key) == -1)
    // {
    //     answer =  abs(floor_srt_arr(ans, key) - key);
    // }else{
    //     answer = min(abs(floor_srt_arr(ans, key) - key), abs(ceil_srt_arr(ans, key) - key));
    // }
}
