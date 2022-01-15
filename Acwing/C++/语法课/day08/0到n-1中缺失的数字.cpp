class Solution
{
public:
    int getMissingNumber(vector<int> &nums)
    {
        unordered_set<int> s;
        for (int i = 0; i < nums.size() + 1; i++)
        {
            s.insert(i);
        }
        for (int v : nums)
        {
            s.erase(v);
        }
        return *s.begin();
    }
};