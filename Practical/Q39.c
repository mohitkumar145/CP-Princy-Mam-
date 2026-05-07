// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char arr1[] = {'a', 'b', '\0'};
//     char arr2[] = {'A', 'B', '\0'};
//     strcpy(arr1, arr2);

//     printf("%c", arr1[0]);
//     return 0;
// }


// Correct 
#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[100], arr2[100];

    printf("Enter first string: ");
    scanf("%s", arr1);

    strcpy(arr2, arr1);

    printf("Copied string: %s", arr2);

    return 0;
}