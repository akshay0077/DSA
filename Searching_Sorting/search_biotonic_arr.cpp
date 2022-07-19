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
            }else if(ans[mid - 1] > ans[mid])
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
int Asc_binarySearch(vector<int>& ans, int key, int start , int end)
{
    int s = start;
    int e = end;

    while(s <= e)
    {
        int mid = s + (e - s)/2;
        if(ans[mid] == key)
        {
            return mid;
        }else if(ans[mid] > key)
        {
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }
    return -1;
}
int Desc_binarySearch(vector<int>& ans, int key, int start , int end)
{
    int s = start;
    int e = end;

    while(s <= e)
    {
        int mid = s + (e - s)/2;
        if(ans[mid] == key)
        {
            return mid;
        }else if(ans[mid] > key)
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
    vector<int> ans = {1,4,8,3,2};
    int key = 4;
    int peak = peak_ele(ans);
    cout << "peak : " << peak_ele(ans) << endl;
    int asc_BS = Asc_binarySearch(ans, key, 0, peak - 1);
    int desc_BS = Desc_binarySearch(ans, key, peak, ans.size() - 1);

    cout << max(asc_BS, desc_BS) << endl;

}