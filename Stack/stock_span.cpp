#include<bits/stdc++.h>
using namespace std;
vector<int> NGL(vector<int> &arr, int n)
{
    vector<int> v;
    stack<pair<int, int>> s;

    for (int i = 0; i < n; i++)
    {
        if(s.empty())
        {
            v.push_back(-1);
        }else if(!s.empty() && s.top().first >= arr[i])
        {
            v.push_back(s.top().second);
        }
        else{
            while(!s.empty() && s.top().first < arr[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                v.push_back(-1);
            }else{
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    return v;
}
int main()
{
    vector<int> arr = {24,14 ,3, 25 ,18 ,36 ,18, 2 ,27, 36};
    vector<int> ans = NGL(arr, arr.size());

    for (int i = 0; i < ans.size(); i++)
    {
        ans[i] = i - ans[i];
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}