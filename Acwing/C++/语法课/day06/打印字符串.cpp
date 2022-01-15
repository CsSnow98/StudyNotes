#include <iostream>
#include <cstring>

using namespace std;

void print(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        cout << str[i];
    }
    
}

int main()
{
    char str[101]; //数组长度应大于输入数据长度
    cin.getline(str,101);
    print(str);
    return 0;
}

/*给定一个字符串，请你编写一个函数，void print(char str[])，将这个字符串打印出来。

输入格式
共一行，包含一个字符串。

输出格式
共一行，表示打印出的字符串。

数据范围
1≤字符串长度≤100
输入样例：
I love AcWing.
输出样例：
I love AcWing.