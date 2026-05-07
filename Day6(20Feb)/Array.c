
#include <stdio.h>
int main()
{

    int arr[2];
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {

        // printf("ENter the value of index[ %d", i);
        // printf("%d", i);
        // printf("] :");

        // or

        printf("Enter the value of index[%d", i);
        printf("]:");

        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {

        printf("%d", arr[i]);
        printf(" ");
    }

    return 0;
}
