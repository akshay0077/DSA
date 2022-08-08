#include <bits/stdc++.h>
using namespace std;
int peak_ele(vector<int>& ans)
{
    int s = 0;
    int e = ans.size() - 1; 

    while(s <= e)
    {
        int mid = s + (e - s)/2;
        if(mid - 1 >= s && mid + 1 <= e)
        {
            if(ans[mid] > ans[mid - 1] && ans[mid] > ans[mid + 1])
            {
                return mid;
            }else if(ans[mid] < ans[mid - 1])
            {
                e = mid - 1;
            }else{
                s = mid + 1;
            }

        }else if(mid == s)
        {
            if(ans[s] > ans[s + 1])
            {
                return s;
            }else{
                return s + 1;
            }
        }else if(mid == e)
        {
            if(ans[e] > ans[e - 1])
            {
                return e;
            }else{
                return e - 1;
            }
        }
    }
    return -1;
}


int peakEle(vector<int>& ans)
{
    int s = 0;
    int e = ans.size() - 1;

    while(s <= e)
    {
        int mid = s + (e - s)/2;

        if(mid - 1 >= s && mid + 1 <= e)
        {
            if(ans[mid - 1] < ans[mid] && ans[mid + 1] < ans[mid])
            {
                return mid;
            }else if (ans[mid] < ans[mid - 1])
            {
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }else if(mid == s)
        {
            if(ans[s] > ans[s + 1])
            {
                return s;
            }else{
                return s + 1;
            }
        }else if(mid == e)
        {
            if(ans[e] > ans[e - 1])
            {
                return e;
            }else{
                return e - 1;
            }
        }
    }
    return -1;

}
int main()
{
    vector<int> ans = {7,9,12,15,17};
    cout << peakEle(ans) << endl;

}