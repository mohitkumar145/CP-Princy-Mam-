#include <stdio.h>
int main()
{
    // M - 1
    for (int i = 'A'; i <= 'Z'; i++)
    {
        printf("%c ", i);
    }
    // M - 2 (don't use this)
    printf("\n");
    for (int i = 65; i <= 90; i++)
    {
        printf("%c ", i);
    }
    printf("\n");
    // M -3 is best use this
    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        printf("%c ", ch);
    }

    
    char ch = 'g';
    ch = ch - 'a' + 'A';
    printf("%c", ch);
    return 0;
};
