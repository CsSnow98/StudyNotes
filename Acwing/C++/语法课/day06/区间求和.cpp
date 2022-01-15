#include <iostream>

using namespace std;

int sum(int l,int r)
{
    int temp=0; //注意初始化
    for (int i = l; i <= r; i++)
    {
        temp += i;
    }
    return temp;
}

int main()
{
    int l,r;
    cin >> l>>r;
    cout << sum(l,r);
    return 0;
}
/*输入两个整数 l 和 r，请你编写一个函数，int sum(int l, int r)，计算并输出区间 [l,r] 内所有整数的和。

输入格式
共一行，包含两个整数 l 和 r。

输出格式
共一行，包含一个整数，表示所求的和。

数据范围
1≤l≤r≤1000
输入样例：
3 5
输出样例：
12
