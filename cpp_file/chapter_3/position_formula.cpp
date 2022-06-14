# include<iostream>
# include<iomanip>

using namespace std;

int main()
{

    // 按位与 &
    // 按位或 |
    // 按位非 ~         00000010 11111101 带符号的整数 取反在加一
    // 按位异或 ^  两个操作数相同 为0 两个操作数不同为1；
    // 左移
    // 右移

    int a =4, b=5;
    cout << "and:" <<(a & b) << endl;
    cout << "or:" << (a | b) << endl;
    cout << "not:" << (~a) << endl;

    cout << INT_MAX << endl;

    // sizeof 运算符可以获得数据类型占用内存的大小
    cout << sizeof(a) << endl;

    // 运算符优先级
    // 位运算符包括！ ~ ++ -- sizeof
    // 优先级最低的是赋值运算符
    // 可以通过（）控制优先级
    // 赋值运算符，三目运算符
    // 算术运算符> 关系运算符  > 逻辑运算符
    

}