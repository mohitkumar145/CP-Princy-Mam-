// #include <stdio.h>

// int main()
// {

//     //     int n, first = 0, second = 1, next;

//     //     printf("Enter number of terms: ");
//     //     scanf("%d", &n);

//     //     printf("Fibonacci Series: ");

//     //     for (int i = 0; i < n; i++)
//     //     {
//     //         printf("%d ", first);
//     //         next = first + second;
//     //         first = second;
//     //         second = next;
//     //     }

//     //     M- 2

//     int n;
//     printf("Enter number of terms: ");
//     scanf("%d", &n);

//     int fib[n];

//     if (n >= 1)
//         fib[0] = 0;
//     if (n >= 2)
//         fib[1] = 1;

//     for (int i = 2; i < n; i++)
//     {
//         fib[i] = fib[i - 1] + fib[i - 2];
//     }

//     printf("Fibonacci Series: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", fib[i]);
//     }

//     return 0;
// }


// Recursive function


#include <stdio.h>
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        printf("%d ", fibonacci(i));

    return 0;
}

