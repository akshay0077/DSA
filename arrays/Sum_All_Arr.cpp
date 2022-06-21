#include<iostream>
using namespace std;

int SumAll(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[5] = {2,7,1,-4,11};

    cout << "sum of all element : " << SumAll(arr, 5) << endl;
}