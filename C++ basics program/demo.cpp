// Question: Check Leap Year

// Example 1:
// Input: 1968	
// output: Is a leap year
// ----------
// Example 2:
// Input: 2006
// output: Is a Not leap year
// ----------
// Example 3:
// Input : 1971
// output: Is a Not leap  year

#include<iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter Year: " << endl;
    cin >> year;

    if(year%4 == 0 || year%400 == 0)
    {
        cout << year << " is leap year " << endl;
    }else{
        cout << year << " is not leap year " << endl;
    }

}