#include <bits/stdc++.h>
using namespace std;

int imp_strstr(string s, string key)
{
    for(int i = 0; i <= s.size() - key.size(); i++)
    {
        string str = s.substr(i, key.size());
        if(str == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string s = "hellow";
    string key = "ow";
    cout << " index is : " << imp_strstr(s, key) << endl;
}
