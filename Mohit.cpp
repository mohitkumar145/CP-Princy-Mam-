
#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = 1; // 1 for true, 0 for false
    cout << "Enter the value of n: ";
    cin >> n;
    if (n <= 1)
    {
        cout << "Not a prime number";
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 1)
        {
            cout << n << " is a prime number";
        }
    else
    {
        cout << n << " is not a prime number";
    }
    return 0;
}
