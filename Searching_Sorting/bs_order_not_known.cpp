#include <bits/stdc++.h>
using namespace std;

int Desc_Sort_Arr(vector<int>& ans, int key)
{
    int s = 0;
    int e = ans.size() - 1;

    while(s <= e)
    {
        int mid = s + (e - s)/2;
        if(ans[mid] == key)
        {
            return mid; 
        }else if(key < ans[mid])
        {
            s = mid + 1;
        }else{
            e = mid - 1;
        }
    }
    return -1;
}

int Asc_Sort_Arr(vector<int>& ans, int key)
{
    int s = 0;
    int e = ans.size() - 1;

    while(s <= e)
    {
        int mid = s + (e - s)/2;
        if(ans[mid] == key)
        {
            return mid; 
        }else if(key < ans[mid])
        {
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> ans = {5};
    int key = 5;
    if(ans.size() <= 1)
    {
        if(ans[0] == key)
        {
            cout << 0 << endl; 
        }else{
            cout << -1 << endl;
        }
        
    }else{
        if(ans[0] < ans[1])
        {
            cout << "Asc " << Asc_Sort_Arr(ans, key) << endl;
        }else{
            cout << "Desc " << Desc_Sort_Arr(ans, key) << endl;
        }
    }
    // cout << Desc_Sort_Arr(ans, key) << endl;
}