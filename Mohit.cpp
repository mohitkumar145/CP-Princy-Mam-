
// #include <iostream>
// using namespace std;
// int main()
// {
//     return 0;

// }// #include <iostream>
// using namespace std;
// int main()

// {

//     int n;
//     cout << "enter the value of n :";
//         cin >> n;
//     bool isPrime = true;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             isPrime = false;
//             break;
//         }

//     }
//     if (isPrime == true)
//     {
//         cout << n << " Is prime No";
//     }
//     else
//     {
//         cout << n << " Is non prime No";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{

    // char A = 'a';
    // char Z = 'z';
    // int n1 = A;
    // cout << n1;

    // int a = 5, b = 10;
    // int temp = b;
    // b = a;
    // a = temp;
    // cout << a << " " << b;

    // for(int i =1; i<=10; i++) {
    // cout << i << " ";
    // }

    int i = 0, j = 0;
    while (i < 5 & j < 10) /// while me jo last me likha hai wahi apply hota hai FINAL COND while(j<10) agr j <2 se to final while(j<2)
    {

        i++;
        j++;
    }
    cout << i << j;

    return 0;
}
