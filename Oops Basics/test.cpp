#include<bits/stdc++.h>
using namespace std;
// ABBA
// bool ispalindrom(string str)
// {
//     int s = 0;
//     int e = str.size() - 1;

//     while(s <= e)
//     {
//         if(str[s] == str[e])
//         {
//             s++;
//             e--;
//         }else{
//             return false;
//         }
//     }
//     return true;
// }
bool ispalindrom(string str)
{
    string q = str;

    reverse(q.begin(), q.end());
    if(str == q)
    {
        return true;
    }else{
        return false;
    }


}
int main() {
    string s;
    cout << "Enter String : "<< endl;
    cin >> s ;

    bool ans = ispalindrom(s);
    if(ans)
    {
        cout << s + " is pelindrom ";
    }else{
        
        cout << s + " is not pelindrom ";
    }
}