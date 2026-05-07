#include <iostream>
using namespace std;
int main()

{

    // Q) Wether a Year is Leap or not?

    int year;
    cout << "Enter the year :" << endl;
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << "it is a leap year";
            }
            else
            {
                cout << "it is not a leap year";
            }
        }
        else
        {
            cout << "it is a leap year";
        }
    } else
    {
        cout << "it is not a leap year";
    }

    return 0;
}