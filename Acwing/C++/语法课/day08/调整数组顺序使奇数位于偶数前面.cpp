class Solution
{
public:
    void reOrderArray(vector<int> &array)
    {
        int p = 0, q = array.size() - 1;
        while (p < q)
        {
            while (p < q && array[p] % 2)
                p++;
            while (p < q && array[q] % 2 == 0)
                q--;
            if (p < q)
                swap(array[p], array[q]);
            p++;
            q--;
        }
    }
};