# include<iostream>
# include<iomanip>
# include<math.h>


using namespace std;

int main()
{
    double salary = 3200;
    double total = salary * 2;
    char sex = 'F';         // 单引号是字符，双引号是字符串
    int score = 98;


    // 关系运算符
    // > < <= >= == !=
    // C语言中0表示假, 1表示真
    // C++ 引入bool类型 True表示真 Flase表示假

    cout << boolalpha;
    cout << "is 6 larger than 4? " << '\t' << (6>4) << endl;

    // 逻辑运算符 
    // 与 && 或 || 非 ！


    cout << '*'*20 << endl;
    int num = 1024;
    num +=90;
    num *=90;
    num /=64;
    num %=90;
    cout << num << endl;
    return 0;




}