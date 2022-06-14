# include<iostream>
# include<iomanip>
# include<math.h>

// 声明函数
int func1();
int func2();
int func3();

// 声明命名空间
using namespace std;

int main()
{
    int age;
/*     for(;;)
    {
        cout << "please input your age:"<<endl;
        cin >> age;
        if(age<0)
        {
            cout << "illegal" << endl;
            break;
        }
    } */
    func1();

    return 0;
}


// 打印图案
int func1()
{
    for(int i=0; i<30; ++i)
    {
        cout << i << "," << endl;
    }

    for(int row=0; row<5; row++)
    {
        for(int col=0; col<5-row; col++)
        {
            cout << " ";
        }
        for(int j = 1; j <= 2 * row - 1; j++){
            cout << "*";
        }
        cout << "\n";
    }


    return 0;
}
