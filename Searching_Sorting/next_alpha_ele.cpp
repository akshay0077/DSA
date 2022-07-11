#include <bits/stdc++.h>
using namespace std;

char next_alpha_ele(vector<char> ans, int key)
{
    int s = 0;
    int e = ans.size() - 1;
    char res = '#';

    while(s <= e)
    {
        int mid = s + (e - s)/2;

        if(ans[mid] == key)
        {
            // it's return to position of mid
            return ans[mid + 1];
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
    vector<char> ans = {'c', 'f', 'h'};
    char key = 'z';
    cout << next_alpha_ele(ans, key) << endl;
}
