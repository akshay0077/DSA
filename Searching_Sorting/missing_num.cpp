#include <bits/stdc++.h>
using namespace std;

int missing_num(vector<int>& nums)
{
    sort(nums.begin(), nums.end());
    int ans = nums.size();
        for(int i = 0; i < nums.size(); i++)
        {
            if(i != nums[i])
            {
               ans = i;
                break;
            }
        }    
    return ans;
}
int main()
{
    vector<int> nums = {3,0,1};
    cout << missing_num(nums) << endl;
}