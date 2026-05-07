#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "Apple";
    char b[] = "Banana";

    int result = strcmp(a, b);

    printf("%d", result);

    return 0;
}