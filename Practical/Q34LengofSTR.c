// #include <stdio.h>

// int main()
// {
//     char str[100];
//     int i = 0, length = 0;
//     printf("Enter a string: ");
//     scanf("%s", str);
//     while (str[i] != '\0')
//     {
//         length++;
//         i++;
//     }
//     printf("Length of string = %d", length);
//     return 0;
// }


// // using libraray fn

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     // char str[] = {'a', 'b', 'd', '\0'};

//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s", str);

//     printf("Length = %lu", strlen(str));

//     return 0;
// }

// using for loop

#include <stdio.h>
int main()
{
    // char str[100];
    // printf("Enter a string: ");
    // scanf("%s", str);
    int i, length = 0;
    char str[] = {'a', 'b', 'd', '\0'};
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    printf("Length of string = %d", length);
    return 0;
}
