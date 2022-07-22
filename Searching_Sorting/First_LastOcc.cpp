#include <bits/stdc++.h>
using namespace std;

// int firstOcc(int arr[], int size, int key)
// {
//     int s = 0, e = size-1;
//     int ans = -1;
//     int mid = s + (e - s)/2;

//     while(s <= e)
//     {
//         if(arr[mid] == key)
//         {
//             ans = mid;
//             //for the First occu is always left size so e is minus from mid.
//             e = mid - 1; 
//         }else if(key > arr[mid])
//         {
//             s = mid + 1;
//         }else{
//              e = mid - 1; 
//         }
//         mid = s + (e - s)/2;
//     } 
//     return ans;
// }

// int lastOcc(int arr[], int size, int key)
// {
//     int s = 0, e = size-1;
//     int ans = -1;
//     int mid = s + (e - s)/2;

//     while(s <= e)
//     {
//         if(arr[mid] == key)
//         {
//             ans = mid;
//             //for the last occu is always right size so s is plus into mid.
//             s = mid + 1; 
//         }else if(key > arr[mid])
//         {
//             s = mid + 1;
//         }else{
//              e = mid - 1; 
//         }
//         mid = s + (e - s)/2;
//     } 
//     return ans;
// }

   int firstPos(vector<int>& nums, int target)
    {
        int s = 0;
        int e = nums.size() - 1;
        int ans = -1;
        
        while(s <= e)
        {
            int mid = s + (e - s)/2;
            
            if(nums[mid] == target)
            {
                ans = mid;
                e = mid - 1;
            }else if(target > nums[mid])
            {
                s = mid + 1;
            }else{
                e = mid - 1;
            }
        }
        return ans;
    }
    
    int lastPos(vector<int>& nums, int target)
    {
        int s = 0;
        int e = nums.size() - 1;
        int ans = -1;
        
        while(s <= e)
        {
            int mid = s + (e - s)/2;
            
            if(nums[mid] == target)
            {
                ans = mid;
                s = mid + 1;
            }else if(target > nums[mid])
            {
                s = mid + 1;
            }else{
                e = mid - 1;
            }
        }
        return ans;
    }
int main()
{
//     int arr[10] = {1,2,3,3,3,3,3,3,5,5};
//     int key = 3;

//     cout << "First Occurance is : " << firstOcc(arr, 10, key) << endl;
//     cout << "Last Occurance is : " << lastOcc(arr, 10, key) << endl;
        vector<int> nums = {};
        int target = 0;
        vector<int> ans;

        if(nums.size() == 0)
        {
                ans.push_back(-1);
                ans.push_back(-1);
        }
        if(nums.size() <= 1)
        {
            
            if(nums[0] == target)
            {
                ans.push_back(0);
                ans.push_back(0);
            }
        }else{
            int firstEle = firstPos(nums,target);
            int lastEle = lastPos(nums,target);
        
            ans.push_back(firstEle);
            ans.push_back(lastEle);
        }
        
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << endl;
        }
        

}

