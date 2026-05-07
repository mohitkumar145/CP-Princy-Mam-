
#include <stdio.h>
double pi = 3.14;
int main()
{

    char A = 'a';
    char Z = 'z';
    int n1 = A;
    printf("%d", n1);
    printf("%2f", pi);

    // // upper to lower

    // char ch;

    // printf("Enter an uppercase character: ");
    // scanf("%c", &ch);

    // if (ch >= 'A' && ch <= 'Z')
    // {
    //     ch = ch + 32;
    // }

    // printf("Lowercase: %c", ch);

    // // OR USING LIBRARY

    // #include <stdio.h>
    // #include <ctype.h>
    // int main()
    // {
    //     // oh

    //     // char ch;
    //     // printf("Enter a character: ");
    //     // scanf("%c", &ch);
    //     // ch = tolower(ch);
    //     // printf("Lowercase: %c", ch);

    //     return 0;
    // }

    // lower TO UPPER

    char ch;
    printf("Enter an lowercase character: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    printf("Uppercase: %c", ch);

    return 0;
}
