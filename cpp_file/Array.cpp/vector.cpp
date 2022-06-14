# include<iostream>
# include<vector>
# include<algorithm>

using namespace std;

int main()
{
    vector<double> vecDouble = {11, 22, 99, 31};
    // 向数组中插入数字
    vecDouble.push_back(100.8);
    // 
    for(int i=0; i<vecDouble.size(); i++)
        cout << vecDouble[i] << endl;

    // 集合的通用遍历方法：使用迭代器 iterator
    // 以下是迭代器的基本用法，高能慎重！
    vector<double>::iterator it;    // 得到的迭代器对象-实际上是一个指针对象！
    // it.begin
    sort(vecDouble.begin(), vecDouble.end());
    reverse(vecDouble.begin(), vecDouble.end());
    for(it=vecDouble.begin(); it!=vecDouble.end(); ++it)
    {
        cout << *it << endl;

    }



    return 0;
}

