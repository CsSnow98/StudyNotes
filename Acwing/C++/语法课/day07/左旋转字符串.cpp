class Solution {
public:
    string leftRotateString(string str, int n) {
        int len = str.size();
        string res;
        for (int i = 0; i < len; i++)
        {
            res += str[(i + n)%len]; //要加上去，不要赋值
            cout << res[i];
        }
        return res;
    }
};