# include<iostream>
# include<ctime>
# include<math.h>

// 函数声明
int func1();
int func2();

// 使用命名空间
using namespace std;

int main()
{
    // 使用二维数组
    string stu_names[] = {"Jane", "Mike", "Grace"};
    string course_names[] = {"mathematics", "English", "Psychology", "Hydrology"};

    const int ROW = 3;
    const int COL = 4;
    double scores[ROW][COL];
    for(int i=0; i<ROW; i++) // 外层循环控制学生
    {
        for(int j=0; j<COL; j++)
        {
            cout << stu_names[i] <<"'s academic perfermance in " << course_names[j] << ": ";
            cin >> scores[i][j];
        }
        cout << endl;
    }

    // 打印结果
    for(int i=0; i<ROW; i++)
    {
        cout << stu_names[i] <<"'s:\t";
        for(int j=0; j<COL; j++)
        {
            cout << course_names[j] << " grade:";
            cout << scores[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}