#include<iostream>
using namespace std;

int main()
{
    int num, sum;
    sum = 0;
    cout << "enter The Number : " << endl;
    cin >> num;
    //  for Even i = 2 
    // for odd i = 1 
    for(int i = 2; i<= num; i+=2)
    {
        sum += i; 
    } 

    cout << "Sum is : "<< sum << endl;
}