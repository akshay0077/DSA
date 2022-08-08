#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreater(vector<int> &arr, int n) {
    // Write your code here
    vector<int> ans;
    stack<int> s;
    
    for(int i = arr.size() - 1; i>=0; i--)
    {
        if(s.empty())
        {
            ans.push_back(-1);
        }else if(s.top() > arr[i])
        {
            ans.push_back(s.top());
        }else {
            while(!s.empty() && s.top() <= arr[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                ans.push_back(-1);
            }else{
                ans.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
 
}
int main()
{
    vector<int> arr = {9,3,6,5};

    vector<int> res = nextGreater(arr, arr.size());
    
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
    
}