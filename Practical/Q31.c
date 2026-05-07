#include <stdio.h>
int main()
{
    int i, n, arr[100];
    printf("Etner the no of terms in fibonacci series");
    scanf("%d", &n);
    arr[0] = 1, arr[1] = 1;
    for (i = 2; i < n; i++)
        arr[i] = arr[i - 1] + arr[i - 2];

    for (i = 0; i < n; i++)
        printf("%d, ", arr[i]);
    return 0;
}

