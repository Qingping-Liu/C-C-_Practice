# include<iostream>
# include<iomanip>
# include<algorithm>
# include<math.h>
# include<windows.h>    // 随机函数
# include<ctime>    // 时间
// 函数声明
int func1();
int func2();

// 命名空间声明
using namespace std;

int main()
{
    int arr[10];
    //srand(time(NULL));

    for(int i=0; i<sizeof(arr)/sizeof(int); ++i)
    {
        cout<< rand()%10 << endl;
    }
    return 0;
}