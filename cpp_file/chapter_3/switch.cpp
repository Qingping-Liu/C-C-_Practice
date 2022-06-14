# include <iostream>
# include <iomanip>

using namespace std;

void func1();

int main()
{
    cout << "please input a number:";
    int num, odd_even;
    cin >> num;
    if (num%2)
        odd_even=0;
    else
        odd_even=1;
    cout << num << " is a ";
    switch(odd_even)
    {
        case 0: 
            cout << "odd number" << endl;
            break;
        case 1: 
            cout << "even number" << endl;
            break;
        default: 
            cout << "not a number" << endl;
            break;
    }

    func1();

    return 0;
}




void func1()
{
    int choice = 1;
    switch (choice)
    {
    case 1:
        cout << "FIRST";
        break;
    case 2:
        cout << "SECOND";
        break;
    case 3:
        cout << "THIRD";
        break;
    default:
        cout << "DEFAULT" << endl;
        break;
    }

}

void func2()
{
    char ch;
    int aCnt =0, eCnt=0, iCnt=0,
        oCnt =0, uCnt=0;
    while (cin>>ch)
    {
        // if ch is a vowel,increment the appropriate counter.
        switch (ch)
        {
        case 'a':
            ++aCnt;
            break;
        case 'e':
            ++eCnt;
            break;
        case 'i':
            ++iCnt;
            break;
        case 'o':
            ++oCnt;
            break;
        case 'u':
            ++uCnt;
            break;
        
        default:
            break;
        }
    }

    cout << "Number of vowel a:" << aCnt << "\n"
         << "Number of vowel e:" << eCnt << "\n"
         << "Number of vowel i:" << iCnt << "\n"
         << "Number of vowel o:" << oCnt << "\n"
         << "Number of vowel u:" << uCnt << "\n" << endl;
}