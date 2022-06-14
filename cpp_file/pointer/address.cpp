# include<iostream>
# include<math.h>
# include<algorithm>

// 命名空间声明
using namespace std;

int main()
{
    // 首先要声明指针
    int num = 10;
    // 声明一个指针，指向num变量

    int *ptr_num;
    ptr_num = &num;
    cout <<"ptr_num's value:" <<ptr_num<<"\t"<< &num <<endl;;
    cout <<"the value pointed by ptr:" << *ptr_num<<endl;;

    char ch = 'a';
    char *ptr_ch;
    ptr_ch = &ch;
    cout << (void *)ptr_ch << "\t" << *ptr_ch << "\t" << &ch << endl;

    return 0;
}