class Solution
{
public:
    int getNumberOfK(vector<int> &nums, int k)
    {
        int res;
        for (int v : nums)
        {
            if (v == k)
            {
                res++;
            }
        }
        return res;
    }
};