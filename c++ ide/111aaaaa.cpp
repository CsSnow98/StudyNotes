#include <bits/stdc++.h>

using namespace std;


vector<int> arr= {-2,1,-3,4,-1,2,1,-5,4};

int maxSubArray(vector<int>& nums) {
    vector<int> dp(nums.size());
    dp[0] = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        dp[i] = max(nums[i], dp[i - 1] + nums[i]);     
        cout << "dp" << i << ":" << dp[i] << endl;       
    }
    return dp[nums.size() - 1];
}

int main()
{
    cout << maxSubArray(arr) << endl;
    return 0;
}