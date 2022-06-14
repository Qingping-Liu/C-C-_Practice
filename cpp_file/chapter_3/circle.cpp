# include<iostream>
# include<iomanip>
# include<math.h>


// 函数声明
int fun();
int transanction();
int func3();

// 命名空间的声明
using std::cout;
using std::cin;

// 定义一个常量
const int num = 100;

int main()
{
    int i = 0;  // 循环变量的初始值
    while (i<num)   // 循环的结束条件
    {   
        cout<< "circle_" << i <<"\n";
        i++;    // 循环自增过程
    }

    transanction();
    func3();
    return 0;
}




using std::string;
using std::endl;

int fun()
{
    string password;    //密码
    int i =0;
    while (i<3)
    {
        cout << "please input the password!\n";
        cin >> password;

        if (password=="123456")
        {
            cout << "password correct!!!" << endl;
            break;
        }
        else if (i<2)
        {
            cout << "wrong password, please input again!";
        }
        else if (i==2)
        {
            cout << "warning: 3 times wrong input, you are forced to log out the system.";
        }

        i++;
    }
    return 0;
}


int transanction()
{
    double money = 800.0;
    int year = 2015;
    while (money<2000)
    {
        year++;
        money = money + money * 0.25;
    }
    cout << "2000 dollars will be reached on" << year;
    return 0;
}


int func3()
{
    double salary = 0;
    double sumSalary =0;
    double avgSalary = 0;
    const int YEAR = 6;
    for(int i=0; i < YEAR; i++)
    {
        cout << "please input the salary in month j:"<< endl;
        cin >> salary;
        sumSalary += salary;
        

    }
    avgSalary = sumSalary / YEAR;
    cout << "the average salary in 6 year" << avgSalary << endl;


    return 0;
}