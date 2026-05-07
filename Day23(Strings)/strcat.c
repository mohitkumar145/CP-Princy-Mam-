// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char a[20] = "Hello ";
//     char b[] = "World";

//     strcat(a, b);

//     printf("%s", a);

//     return 0;
// }

// Manual Method

#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = "Hello ";
    char b[] = "World";
    int i = 0, j = 0;
    while (a[i] != '\0')
        i++; // go to end
    while (b[j] != '\0')
    {
        a[i] = b[j];
        i++;
        j++;
    }
    a[i] = '\0';
    printf("%s", a);
    return 0;
}
