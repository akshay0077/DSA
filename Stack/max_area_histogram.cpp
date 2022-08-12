#include<bits/stdc++.h>
using namespace std;

vector<int> NSR(vector<int>& arr)
{
    int psudoIndex = arr.size();
    vector<int> v;
    stack<pair<int,int>> s;

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if(s.empty())
        {
            v.push_back(psudoIndex);
        }else if(!s.empty() && s.top().first < arr[i])
        {
            v.push_back(s.top().second);
        }else{
            while(!s.empty() && s.top().first >= arr[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                v.push_back(psudoIndex);
            }else{
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    reverse(v.begin(), v.end());
    return v;
}

vector<int> NSL(vector<int>& arr)
{
    int psudoIndex = -1;
    vector<int> v;
    stack<pair<int,int>> s;

    for (int i = 0; i < arr.size(); i++)
    {
        if(s.empty())
        {
            v.push_back(psudoIndex);
        }else if(!s.empty() && s.top().first < arr[i])
        {
            v.push_back(s.top().second);
        }else{
            while(!s.empty() && s.top().first >= arr[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                v.push_back(psudoIndex);
            }else{
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
 
    return v;
}
vector<int> width(vector<int>& arr)
{
    vector<int> widthElm;
    vector<int> NSR_Index = NSR(arr);
    vector<int> NSL_Index = NSL(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        widthElm.push_back((NSR_Index[i] - NSL_Index[i]) - 1);
    }
    return widthElm;
}
int AreaHistogram(vector<int>& arr)
{
    vector<int> widthElm = width(arr);
    int ans = INT_MIN;

    for(int i = 0; i < arr.size(); i++)
    {
       long x = arr[i] * widthElm[i];
       if(x > ans)
       {
            ans = x;
       }
    }
    return ans;
}
int main()
{
    vector<int> arr = {2,4};
    
     cout << AreaHistogram(arr) << endl;
}