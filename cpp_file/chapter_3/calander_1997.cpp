# include<iostream>
# include<iomanip>
# include<math.h>

// 函数声明
int func1();
int func2();

// 主函数main()


// 关键字命名空间
using namespace std;

int main()
{
    // 使用循环打印1997年7月的月历
    // 已知1997年7月1日是周二，香港回归
    // 1. 定义变量
    // 2. 书写循环
    // 3. 书写循环体内的条件
    int weekday = 2;       // 七月第一天是周二
    int day =1;
    int month=7;
    int sumday = 31;    // 七月有31天
    
    cout << "the calendar of July 1997\n";
    cout << left << "Sun\t"<<"Mon\t" << "Tus\t" << "Wed\t"<<"Thu\t"<< "Fri\t" << "Sat\t" <<endl;


    while(day<=weekday)
    {
        cout << "\t";
        day++;
    }

    for(day = 1; day <= sumday; ++day)
    {
        cout << left << day;
        if((day + weekday - 0) % 7 == 0)
            cout <<"\n";
        else
            cout << "\t";
    }

    return 0;

}