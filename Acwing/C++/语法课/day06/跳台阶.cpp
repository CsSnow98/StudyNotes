#include <iostream>

using namespace std;

int tiao(int n)
{
    int num = 0;
    if(n==1) return 1;
    if(n==2) return 2;
    int a,b;
    if(n>=3) a = n - 1;
    if(n>=3) b = n - 2;
    num =  tiao(a) + tiao(b);  
}

int main()
{
    int n;
    cin >> n;
    cout << tiao(n);
    return 0;
}

/*一个楼梯共有 n 级台阶，每次可以走一级或者两级，问从第 0 级台阶走到第 n 级台阶一共有多少种方案。

输入格式
共一行，包含一个整数 n。

输出格式
共一行，包含一个整数，表示方案数。

数据范围
1≤n≤15
输入样例：
5
输出样例：
8