#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 'a' + 'A';
    }
    if (ch >= 'P' && ch <= 'T')
    {
        printf("Alphabet is between P to T");
    }
    else
    {
        printf("Alphabet is NOT between P to T");
    }
    return 0;
}