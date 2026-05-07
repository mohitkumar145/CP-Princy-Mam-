

// #include <stdio.h>
// int main() {

//     int n;
//      printf("n should be greater than 1");
//     int isPrime = 1;   // 1 = true, 0 = false

//     printf("Enter the value of n: ");
//     scanf("%d", &n);

//     for (int i = 2; i < n; i++) {
//         if (n % i == 0) {
//             isPrime = 0;
//             break;
//         }
//     }

//     if (isPrime == 1 && n > 1) {
//         printf("%d is a prime number", n);
//     } else {
//         printf("%d is not a prime number", n);
//     }

//     return 0;
// }

// Best Code

#include <stdio.h>
int main()
{
    int n;
    int isPrime = 1; // 1 for true, 0 for false
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("Not a prime number");
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
    if (isPrime == 1).
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
    return 0;
}
