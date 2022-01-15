#include <iostream>

using namespace std;

int zou(int n,int m)
{
    int num = 0;
    if(n==0&&m==0) return 1;
    // int a=0,b=0;
    if(n==0)
    {
        num = zou(n,m-1);
    }
    else if(m==0)
    {
        num = zou(n-1,m);
    }
    else
    {
        num =  zou(n-1,m) + zou(n,m-1);  
    }
    return num;
}

int main()
{
    int n,m;
    cin >> n>>m;
    cout << zou(n,m);
    return 0;
}
/*给定一个 n×m 的方格阵，沿着方格的边线走，从左上角 (0,0) 开始，每次只能往右或者往下走一个单位距离，问走到右下角 (n,m) 一共有多少种不同的走法。

输入格式
共一行，包含两个整数 n 和 m。

输出格式
共一行，包含一个整数，表示走法数量。

数据范围
1≤n,m≤10
输入样例：
2 3
输出样例：
10