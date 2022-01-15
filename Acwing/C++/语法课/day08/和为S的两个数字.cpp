class Solution
{
public:
    vector<int> findNumbersWithSum(vector<int> &nums, int target)
    {
        unordered_set<int> res;
        for (int v : nums)
        {
            if (res.count(target - v))
            {
                return {v, target - v};
            }
            else
            {
                res.insert(v);
            }
        }
    }
};