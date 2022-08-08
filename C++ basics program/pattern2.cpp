#include<iostream>
using namespace std;

//     1
//    12
//   123
//  1234
// 12345
int main()
{
    int n = 5;
    // row
    for(int i = 1; i<=n; i++)
    {
        // spaces 
        for(int k = n - i; k >= 1; k--)
        {
            cout <<" ";
        }
        // columns
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}