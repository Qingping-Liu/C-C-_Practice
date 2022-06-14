# include<iostream>
# include<ctime>
# include<math.h>

// function declaration
int func1();
int func2();
void bubbleSort(int *arr, int len);
void selectSort(int *arr, int len);

// 命名空间
using namespace std;

//冒泡排序
int main()
{

    srand(time(NULL));
    int N = 7;

    // 随机数初始化一个数组，数组范围0， 100
    int nums[N];
    for(int i=0; i<N; ++i)
    {
        nums[i] = rand()%100;
    }
    for(int i=0; i<N; ++i)
    {
        cout<<nums[i]<<"\t";
    }
    cout<<endl;

    // 冒泡排序
    // 外层循环控制比较次数， 内层循环控制
    //bubbleSort(nums, N);
    //selectSort(nums, N);

    func2();
    return 0;
    
}


void bubbleSort(int *arr, int len)
{
    int temp;
    // 外层循环为比较的轮数
    for(int i=0; i<len-1; i++)
    {
        // 内层循环将数组中的数两两比较，大的放后面，小的放前面
        for(int j=0; j<len-i-1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        cout<<"the sort result of " << i << ":\t";
        for(int k=0; k<len; k++)
        {
            cout<< arr[k] << "\t";
        }
        cout << endl;
    }

}

void selectSort(int *arr, int len)
{

    // 假定最大值为第一个元素
    int index=len-1;
    int temp=arr[index];
    // 外层循环为选择排序的轮数
    for(int i=0; i<len-1; i++)
    {
        // 内层循环确定每一轮的最大值,并放置在最后
        for(int j=0; j<len-i-1; j++)
        {
            if(arr[j]>temp)
            {
                index = j;
            }
            temp = arr[index];
        }
        temp = arr[index];
        arr[index] = arr[len-1-i];
        arr[len-1-i] = temp;

        cout<<"the sort result of " << i << ":\t";
        for(int k=0; k<len; k++)
        {
            cout<< arr[k] << "\t";
        }
        cout << endl;
    }
}


// 数组的增、删、改、查，插入、删除
int func1()
{
    //静态数组，预留足够大的空间
    double power[99]={45771, 42223, 40975, 10012};
    int powercount = 4;

    double insertpower;
    int insertindex=0;  // 默认插入到第一个位置
    
    double temp;
    for(int i=0; i<powercount-1; ++i)
    {
        for(int j=0; j<powercount-1; ++j)
        {
            if(power[j]>power[j+1])
            {
                temp = power[j];
                power[j] = power[j+1];
                power[j+1] = temp;
            }
        }
        cout<<"the result of " << i << "\t:";
        for(int k=0; k<powercount; k++)
        {
           cout<< power[k]<< "\t"; 
        }
        cout << endl;
    }
    cout << "please input the number you want to insert:";
    cin >> insertpower;
    // 1. 找到第一个比插入数字大的位置insertindex
    for(int i=0; i<powercount; ++i)
    {
        if(insertpower>power[i])
            insertindex=i+1;
    }
    //2. 从最后一个元素开始，将数字赋值到后面
    for(int i=powercount-1; insertindex<=i; --i)
    {
        power[i+1]=power[i];
    }
    //3. 将插入的数字赋值给下标为insetindex的元素
    power[insertindex] = insertpower;
    powercount++;
    for(int i=0; i<powercount; ++i)
    {
        cout << power[i] << "\t";
    }

    return 0;
}


int func2()
{
    //静态数组，预留足够大的空间
    double power[99]={45771, 42223, 40975, 10012};
    int powercount = 4;
    // 删除
    //1. 找到要删除的元素下标

    double deletepower;
    int deleteindex= INT_MIN;
    cout << "please input you want to delete:";
    cin >> deletepower;
    for(int i=0; i<powercount; i++)
    {
        if(deletepower == power[i])
        {
            deleteindex = i;
            break;
        }
    }

    //2. 从找到的下标开始，后面一个元素赋值给前面一个元素
    for(int i=deleteindex; i<powercount; i++)
    {
        power[i] = power[i+1];
    }
    //3. 总长度-1
    powercount--;
    cout << "the result:" << endl;
    for(int i=0; i<powercount; i++)
    {
        cout << power[i] << "\t";
    }

    return 0;
}

