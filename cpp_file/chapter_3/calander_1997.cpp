# include<iostream>
# include<iomanip>
# include<math.h>

// ��������
int func1();
int func2();

// ������main()


// �ؼ��������ռ�
using namespace std;

int main()
{
    // ʹ��ѭ����ӡ1997��7�µ�����
    // ��֪1997��7��1�����ܶ�����ۻع�
    // 1. �������
    // 2. ��дѭ��
    // 3. ��дѭ�����ڵ�����
    int weekday = 2;       // ���µ�һ�����ܶ�
    int day =1;
    int month=7;
    int sumday = 31;    // ������31��
    
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