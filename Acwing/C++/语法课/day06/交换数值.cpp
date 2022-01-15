#include <iostream>

using namespace std;

void swap(int &a,int &b)
{
    int t;
    t = a;
    a = b;
    b = t;
}
int main(){
    int a,b;
    cin >>a >> b;
    swap(a,b);
    cout << a << " "<< b;
    return 0;
}
/*输入两个整数 x 和 y，请你编写一个函数，void swap(int &x, int &y), 交换两个整数的数值并输出交换后的 x 和 y。

输入格式
共一行，包含两个整数 x 和 y。

输出格式
共一行，包含交换后的 x 和 y。

数据范围
1≤x,y≤100
输入样例：
3 5
输出样例：
5 3