#include<iostream>
using namespace std;

int main()
{
    int num1,num2,num3;
    cout << "enter 3 Numbers : " << endl;
    cin >> num1 >> num2 >> num3;

    if(num1 >= num2 && num1 >= num3)
    {
        cout << num1 << " is largest Number" << endl;
    }else if(num2 >= num1 && num2 >= num3)
    {
        cout << num2 << " is largest Number" << endl;
    }else{
        cout << num3 << " is largest Number" << endl;
    }
}