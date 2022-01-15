#include <iostream>

using namespace std;

int Fibo(int n)
{
    if(n<3)return 1;
    return Fibo(n-1)+Fibo(n-2);
}
int main()
{
    int n;
    cin >> n;
    cout << Fibo(n);
    return 0;
}
/*
请使用递归的方式求斐波那契数列的第 n 项。

斐波那契数列：1,1,2,3,5…，这个数列从第 3 项开始，每一项都等于前两项之和

输入格式
共一行，包含整数 n。

输出格式
共一行，包含一个整数，表示斐波那契数列的第 n 项。

数据范围
1≤n≤30
输入样例：
4
输出样例：
3