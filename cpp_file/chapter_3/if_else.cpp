# include<iostream>
# include<iomanip>


using namespace std;

int func()
{
    // 使用程序判断用户输入的字符是否是合法的硬盘字符
    char pan = '\0';    //默认设置为空字符
    cout << "please input a char:\t" << endl;
    cin >> pan;
    // 'A'~'Z'
    if (pan>='A' && pan <='Z')
    {
        cout << "clever boy!!!";
    }
    else
    {
        cout << "Not a correct char!!!";
    }

    return 0;
}

int func2()
{
    double price_louis = 350000.0;
    double price_hemes = 100044.5;
    double price_chanel = 1535.0;
    // 如果总价大于20万，打7折
    if (price_chanel + price_hemes + price_louis >400000)
    {
        cout << "Total price:\t"
            << price_chanel + price_hemes + price_louis << "$" <<endl;
        cout << "Dicouted price:\t"
            << (price_chanel + price_hemes + price_louis) *0.7 << "$" <<endl;
    }

    return 0;
}


// 函数声明
int func4();


int main()
{
    cout << "Enter two numbers:"<<endl;
    int v1, v2;
    cin >> v1 >> v2;
    int lower, upper;
    if (v1 <= v2)
    {
        lower = v1;
        upper = v2;
    }
    else 
    {
        lower = v2;
        upper = v1;
    }
    int sum =0;
    for (int val=lower; val<=upper; ++val)
    {
        sum += val;

    }

    cout << "Sum of " << lower
         << "to " << upper
         << "inclusive is "
         << sum << endl; 
    
    func4();

    return 0;
}


int func4()
{
    double flowerPrice;
    // 打印剧情
    cout << "黎明前的黑暗渐渐褪去，海天之间透着一抹光亮，像是点燃了的火把。。。。。。。"
         << "小男生偷偷给小女生送花，小女生问：这花多少钱啊？"
         << "小男生：";
    cin >> flowerPrice;
    if (flowerPrice>=5000)
    {
        cout << "马上领证！";

    }
    else if (flowerPrice>=1000 && flowerPrice<5000)
    {
        cout << "亲一个";
    }
    else if (flowerPrice<1000)
    {
        cout << "拉手";
    }

    return 0;
}