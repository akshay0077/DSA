#include<bits/stdc++.h>
using namespace std;

int lastDigit(int n)
{
    int ans = 0;
    while(n!=0)
    {
        ans = ans + n%10;
        n = n/10;
    }
    return ans;
}
int main()
{
    int n = 1994 ;
    cout << lastDigit(n) << endl;
}