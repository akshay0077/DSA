#include<iostream>
using namespace std;

int main()
{
    int amount, intRate, time,ans;

    amount = intRate = time = ans = 0;
    cout << "Enter Amount : " << endl;
    cin >> amount;

    cout << "Enter Intrust rate : " << endl;
    cin >> intRate;

    cout << "Enter Time : " << endl;
    cin >> time;

    ans = amount * intRate /100;
    ans = ans * time;
    cout << ans << endl;
}