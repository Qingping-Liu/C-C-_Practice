# include<iostream>
# include<iomanip>


using namespace std;

int func()
{
    // ʹ�ó����ж��û�������ַ��Ƿ��ǺϷ���Ӳ���ַ�
    char pan = '\0';    //Ĭ������Ϊ���ַ�
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
    // ����ܼ۴���20�򣬴�7��
    if (price_chanel + price_hemes + price_louis >400000)
    {
        cout << "Total price:\t"
            << price_chanel + price_hemes + price_louis << "$" <<endl;
        cout << "Dicouted price:\t"
            << (price_chanel + price_hemes + price_louis) *0.7 << "$" <<endl;
    }

    return 0;
}


// ��������
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
    // ��ӡ����
    cout << "����ǰ�ĺڰ�������ȥ������֮��͸��һĨ���������ǵ�ȼ�˵Ļ�ѡ�������������"
         << "С����͵͵��СŮ���ͻ���СŮ���ʣ��⻨����Ǯ����"
         << "С������";
    cin >> flowerPrice;
    if (flowerPrice>=5000)
    {
        cout << "������֤��";

    }
    else if (flowerPrice>=1000 && flowerPrice<5000)
    {
        cout << "��һ��";
    }
    else if (flowerPrice<1000)
    {
        cout << "����";
    }

    return 0;
}