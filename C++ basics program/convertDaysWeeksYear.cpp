#include<iostream>
using namespace std;

int main()
{
    int days,weeks,years;

    cout << "Enter The Days : " << endl;
    cin >> days ;

    years = days/365;
    weeks = days % 365 /7;
    days = days - ((years * 365) + (weeks * 7));

    cout << "Years : " << years << endl;
    cout << "Weeks : " << weeks << endl;
    cout << "Days : " << days << endl;

}