# include <iostream>

using namespace std;

int main()
{
    // 要给指针初始化，避免指针悬空，非常危险！！！
    // 等价于int *ptr1=0
    int *ptr1 = nullptr;
    cout << ptr1 << endl;
    // 指向0的地址 
    int *ptr2 = 0; 

    double *ptr_double=NULL;

    // 指针要及时释放

    // void 是一种特殊的指针类型，可以存放任意对象的地址
    double num = 3.14;
    double *ptr_num1 = &num;
    void *ptr_num2 = &num;
    // cout << boolalpha
    cout << boolalpha;
    cout << (ptr_num1==ptr_num2) << endl;

    // void指针 通常作为函数的输入输出，或者与其它指针进行比较
}