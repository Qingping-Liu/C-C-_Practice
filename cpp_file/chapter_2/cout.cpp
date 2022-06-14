# include<iostream>
# include<windows.h>
# include<cmath>
# include<iomanip>


using namespace std;
int main()
{

    //SetConsoleTitle("JJJ"); 设置windows窗口的title
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
    
    cout << "the precisize of float:" << numFloat * 100000 << "\n"
         << "the precisize of Double:" << numDoub * 100000 << endl;
    
    system("pause");
    return 0;
}