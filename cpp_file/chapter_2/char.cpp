# include<iostream>
# include<math.h>
# include<iomanip>

// 使用8个二进制表示一个char类型

// 001 010 011
// 100 101 110 111


// char类型
//  1 1111111
//  0 0000000


// 非常重要
using namespace std;


int func()
{
    //cout << CHAR_MIN << "\t"<< CHAR_MAX << endl;
    //cout << UCHAR_MAX << endl;
    //cout << 2 + 3 << endl;

    //cout << 'A' + ' ' << endl;

    return 0;
}


int main()
{
    int num;
    char ch1, ch2, ch3;
    cout << "please input a number:" << endl;
    cin >> num;     // scanf("%d", &num);
    //cin >> ch1 >> ch2 >> ch3;

    // cget()
    cout << "please input a char1:" << endl;
    ch1 = cin.get();
    cout << "please input a char2:" << endl;
    ch2 = cin.get();
    cout << "please input a char3:" << endl;
    ch3 = cin.get();

    cout << num << "\t" << ch1 << "\t" << ch2 << "\t" << ch3 << endl;

    return 0;
}