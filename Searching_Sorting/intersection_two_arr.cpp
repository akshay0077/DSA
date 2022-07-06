#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
    for (int i = 0; i < nums1.size(); i++)
    {
       for(int j = 0; j < nums2.size(); j++)
       {
            if(find(ans.begin(), ans.end(), nums1[i]) != ans.end())
            {
                break;
            }
            if(nums1[i] == nums2[j])
            {
                ans.push_back(nums1[i]);
                break;
            }
       }
    }
    
    return ans;
}

int main()
{
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};  
    vector<int> ans = intersection(nums1,nums2);
    for(auto var : ans)
    {
        cout << var << endl;
    }
    

}
