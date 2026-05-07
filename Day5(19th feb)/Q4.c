

// 26 feb Q 1


#include <stdio.h>
int main()
{

    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    int revNumb = 0;
    // while (n > 0) // better while(n!=0)
    int original = n;
    while (n != 0)
    {
        int rem = n % 10;
        revNumb = 10 * revNumb + rem;
        n = n / 10;
    }
    printf("%d", revNumb);
    printf("\n");

    if (original == revNumb)
    {
        printf(" %d is a Palindrome number", original);
    }
    else
    {
        printf(" %d is not palindrome number", original);
    }

    return 0;
}
