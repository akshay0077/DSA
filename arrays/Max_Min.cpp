#include<iostream>
using namespace std;

int getMax(int nums[], int n)
{
    int max = INT16_MIN;

    for (int i = 0; i < n; i++)
    {
        if(max < nums[i])
        {
            max = nums[i];
        }
    }
    return max;
}

int getMin(int nums[], int n)
{
    int min = INT16_MAX;

    for (int i = 0; i < n; i++)
    {
        if(min > nums[i])
        {
            min = nums[i];
        }
    }
    return min;
}
int main()
{
    int size;
    cout << "Enter size of elements : " << endl;
    cin >> size ;

    int nums[100];
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
    
    cout << "Maximum Number is : " << getMax(nums, size) << endl;
    cout << "Minimum Number is : " << getMin(nums, size) << endl;


}