# include<iostream>
# include<math.h>
# include<iomanip>

using namespace std;

int main()
{
    string str = "this is a string";
    cout << str <<endl;

    double attack = 272;
    double attack2 = 300;
    double attack3 = 240;

    cout << left;
    cout << setfill('_');
    cout << setw(8) << attack
         << setw(8) <<attack2 
         << setw(8) << attack3 << endl;

}