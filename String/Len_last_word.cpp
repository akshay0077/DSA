#include<bits/stdc++.h>
using namespace std;
int len_last_word(string str)
{
    int ans = 0;
    for(int i = str.size() - 1; i >= 0; i--)
    {
        if(str[i] != ' ')
        {
            ans++;
        }else if(ans > 0 && str[i] == ' ')
        {
            return ans;
        }
    }
    return ans;
}
int main()
{
    string s = "   fly me   to   the    moon     ";
    cout << "length of Last word : " << len_last_word(s) << endl;
}
