# include<iostream>
# include<iomanip>
# include<algorithm>
# include<math.h>

// 函数声明
int func1();
int func2();

// 命名空间声明
using namespace std;

main()
{
    int nums[] = {1, 5, 7, 9, 10, 15};
    int numsLen = sizeof(nums) / sizeof(int);
    for(int i=0; i<numsLen; i++)
    {
        cout << nums[i] << '\t' << endl;
    }
    //累加操作
    int sum=0;
    for (int i=0; i<numsLen; i++)
    {
        sum+=nums[i];
    }
    cout << "the sum of nums is: " << sum << endl;

    func1();
    func2();

    return 0;
}

    /**
    const int N = 100;
    int arr[N];
    arr[0] = 151;

    int years[6] = {2012, 2013, 2014, 2015, 2016, 2017};
    int months[12] = {1, 3, 5, 7 , 8, 9};

    // 动态赋值
    const int C = 5;
    int nums[C];
    for(int i=0; i<C;i++)
    {
        cout<< "please input the " << (i+1) << " integer:"<<endl;
        cin >> nums[i];
    }

    for (int i=0; i<C; i++)
    {
        cout << nums[i] << endl;
    }


    return 0;
}
**/

int func1()
{
    const int N =100;
    int num[N] = {9, 5,2, 7};
    num[0] = 9527;
    for(int i=0; i<N; ++i)
    {
        cout << num[i] << endl;
    }
    return 0;
}

int func2()
{
    // 动态的从键盘录入信息并赋值
    int N;
    cout << "please set the length of 1D array:" << endl;
    cin >> N;

    int nums[N];
    for(int i=0; i<N; i++)
    {
        cout << "please input the value of array: ";
        cin >> nums[i];
    }
    // print
    for(int i=0; i<N; i++)
        cout << nums[i] << '\t';
    
    cout << endl;
    // 计算和与均值
    int sum, ave = 0;
    for(int i=0; i<N; i++)
    {
        sum += nums[i];
    }
    // average
    ave = sum / N;
    cout << "the sum of array:\t" << sum <<'\n'<<"the average of the array:\t" << ave <<endl;
 
    // 计算数组中的最大值，最小值
    int maxValue, minValue = nums[0];
    maxValue = max({1, 3, 5, 7, 9});
    cout << "the max value derived from max function:" << maxValue<<endl;

    //3. 查找输入的数字在数组的小标，没有找到则下标为-1
    int searchvalue =0;
    int searchindex = -1;

    cout<<"please input a number you want to find in the array:";
    cin >> searchvalue;

    for(int i=0; i<N; ++i)
    {
        if(nums[i]==searchvalue)
        {
            searchindex = i;
        }
    }

    if(searchindex==-1){
        cout<<"we didn't find the value:" << searchvalue <<endl;
    }
    else{
        cout<< "the index of value in the array is:" << searchindex<<endl;
    }

    
    return 0;
}

