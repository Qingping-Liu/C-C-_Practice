# include<iostream>
# include<iomanip>
# include<cmath>

// 将iostream标准库添加到程序中
// 包含输入和输出模块 cout << << endl   cin <<

// 冯诺伊曼计算机体系 CPU（控制器，运算器），内存（ROM，RAM），输入，输出

// 操作计算机的内存 main memory 和 RAM 
// 8 bit = 1 B  1kB = 1024B 1MB = 1024KB   1MB = e6 KB   1PB = E6 GB

// 给变量命名：通过变量民可以快速的找到内存中存储的数据
// 变量名：数字，字母，下划线

// 变量名可以很长
// 不能是函数名或关键字

// 数据类型：文本型数据，数值型数据
// 数值： 整型（int， short int， long 和long long）、bool 整型
// 浮点型（float double和long double）
// float : 6-7位有效数字, 少用float类型




// C++其它常用数据类型  size_t类型， 枚举类型， 自定义类型， 指针类型，空类型

using namespace std;

int func2()
{
    typedef int myint;
    myint name = 16;
    float num = 123.12345678910;
    // 打印int类型的最大值
    cout << INT_MAX << endl;
    cout << INT_MIN << endl;
    cout << "hhhh"
         << "YYY" << endl;
    cout << "my DIY datatype:\n"
         << name << endl;
    cout << num << endl;

    // 计算圆柱体的体积
    const float PI = 3.1415926;    // 定义常量
    float radius = 4.5;
    float height = 10;
    double volume = PI * pow(radius, 2) *height;
    cout << "the volume of cylinder:\n"
         << volume << endl;


        
    // 输出double类型的数据
    // 1.强制以小数的方式显示
    cout << fixed ;
    // 2.控制显示的精度
    //cout << setprecision(2);
    double doubleNum = 100.0 / 3.0;
    cout << doubleNum << endl;
    cout << "|" << setw(20) << doubleNum << "|" << endl;


    return 0;
}

// 小明的月薪2500
void func()
{
    int salary = 2500;
    int num = 8; 
    cout << salary
        << num << endl;
}


int main()
{
    //sizeof  用来测试数据类型的长度
    cout << sizeof(double) <<endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long double) << endl;
    
    // 演示单精度浮点型和双精度浮点型精度问题
    float numFloat = 10 /3.0;
    double numDoub = 10 /3.0;
    cout << fixed << setprecision(2);
    cout << "Float:" << numFloat << "\n"
         << "Double:" << numDoub << endl;
    
    cout << "the precisize:" << numFloat * 100000 << "\n"
         << "Double" << numDoub * 100000 << endl;
    return 0;
}