class Solution {
public:
    int getSum(int n) {
        int res = 0; //记得初始化res
        n > 0 && res = n + getSum(n-1);
        return res;
    }
};