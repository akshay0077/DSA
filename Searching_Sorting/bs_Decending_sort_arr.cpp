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
int main()
{
    vector<int> ans = {20,18,14,13,10,8,7,3,1};
    int key = 1;
    cout << Desc_Sort_Arr(ans, key) << endl;
}