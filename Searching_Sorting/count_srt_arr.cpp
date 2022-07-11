#include <bits/stdc++.h>
using namespace std;

int FirstOcc(vector<int>& ans,int key)
{
    int s = 0;
    int e = ans.size() - 1;
    int answer = -1;
    while (s <= e)
    {
        int mid = s + (e - s)/2;
        if(ans[mid] == key)
        {
            answer = mid;
            e = mid - 1;
        }else if(ans[mid] > key)
        {
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }
    return answer;
}
int LastOcc(vector<int>& ans,int key)
{
    int s = 0;
    int e = ans.size() - 1;
    int answer = -1;
    while (s <= e)
    {
        int mid = s + (e - s)/2;
        if(ans[mid] == key)
        {
            answer = mid;
            s = mid + 1;
        }else if(ans[mid] > key)
        {
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }
    return answer;
}
int main()
{
    vector<int> ans = {2,4,10,10,10,18,20};
    int key = 10;
    cout << FirstOcc(ans, key) << endl; 
    cout << LastOcc(ans, key) << endl; 

    cout << "Count of Ele is :" << LastOcc(ans, key) - FirstOcc(ans, key) + 1 << endl;
}
