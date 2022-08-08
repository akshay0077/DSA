#include<iostream>
using namespace std;

int main()
{
    int num,total;
    total = 0;
    cout << "enter the Number :" << endl;
    cin >> num;

    // for(total = 0; num > 0; num /= 10)
    // {
    //     total = total + (num % 10);
    // }

    while(num > 0)
    {
        total = total + (num % 10);
        num /= 10;
    }
    cout << "Sum is : " << total << endl;
}