#include<iostream>
using namespace std;

int main()
{
    int num,last,first,temp;
    last = first = temp = 0;

    cout << "Enter The Number " << endl;
    cin >> num;
    last = num % 10;
    first = num;
    while(num >= 10)
    {
        num/= 10;
    }
    first = num;

    cout << "Sum is : " <<  first + last << endl;

    // swaping
    // swap(first, last);

    // cout << "After Swapping Number is : " <<  num << endl;
}