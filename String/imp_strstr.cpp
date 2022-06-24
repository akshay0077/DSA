#include <bits/stdc++.h>
using namespace std;

int imp_strstr(string s, string key)
{
    if (s.find_first_of(key) == 0)
    {
        return -1;
    }
    else
    {
        return s.find_first_of(key);
    }
}

int main()
{
    string s = "hellow";
    string key = "ow";
    cout << " index is : " << imp_strstr(s, key) << endl;
}
