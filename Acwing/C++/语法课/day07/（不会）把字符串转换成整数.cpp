class Solution {
public:
    int strToInt(string str) {
        long long res = 0; //res保存结果
        int k = 0; // 当前遍历到str的第k位
        while(str[k] == ' ') k++;
        int minus = 1;
        if(str[k] == '-')
        {
            minus = -1;
            k++;
        }
        else if(str[k] == '+')
        {
            k++;
        }
        while(str[k] <= '9' && str[k] >= '0')
        {
            res = res * 10 + (str[k] - '0');
            k++;
        }
        if(res > pow(2, 31) && minus == -1) res = INT_MIN; 
        else if(res > (pow(2, 31) - 1) && minus == 1) res = INT_MAX;
        else res = res * minus;
        return res;
    }
};