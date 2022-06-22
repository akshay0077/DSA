#include<iostream>
using namespace std;

int findUnique(int arr[], int n)
{
    int ans= 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int arr[7] = {7,5,1,3,7,3,5};

    cout << findUnique(arr, 7) << endl;

}