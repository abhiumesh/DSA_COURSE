#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    vector<int> ans;
    int m = 3, n = 3;
    for (int i = 0; i < m; i++)
    {
        ans.push_back(nums1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        ans.push_back(nums2[i]);
    }
    sort(ans.begin(), ans.end());
    nums1.clear();
    nums1 = ans;
    for (auto it : nums1)
    {
        cout << it << " ";
    }
}