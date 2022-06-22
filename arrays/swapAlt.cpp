#include<iostream>
using namespace std;

void swapAlt(int arr[], int size)
{
    int start = 0;
    for(int i = 1; i < size; i+=2)
    {
        if(start < size)
        {
            swap(arr[start], arr[i]);
            start = i + 1;
        }
    }
}
void printArray(int arr[], int n)
{   
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}
int main()
{
    int arr[5] = {5,9,10,3,6};
    int brr[6] = {5,9,10,3,6,12}; 


    swapAlt(arr, 5);
    printArray(arr,5);

    swapAlt(brr, 6);
    printArray(brr,6);
}