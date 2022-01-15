#include <iostream>

using namespace std;


int gcd(int a,int b)
{
    for(int i =1000;i>0;i--)
    {
        if(a%i==0&b%i==0) return i;
    }
}
int main(){
    int a,b;
    cin >>a >> b;
    cout << gcd(a,b);
    return 0;
}
/*输入两个整数 a 和 b，请你编写一个函数，int gcd(int a, int b), 计算并输出 a 和 b 的最大公约数。

输入格式
共一行，包含两个整数 a 和 b。

输出格式
共一行，包含一个整数，表示 a 和 b 的最大公约数。

数据范围
1≤a,b≤1000
输入样例：
12 16
输出样例：
4