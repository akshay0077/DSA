#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size,int key)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[5] = {9,5,7,10,88};
    int key = 7;

    cout << "linear Search : " << linearSearch(arr,5,key) << endl;

}