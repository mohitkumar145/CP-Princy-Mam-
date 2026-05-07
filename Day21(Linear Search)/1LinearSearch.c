#include <stdio.h>
int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 50, 34, 56, 24, 67, 25, 49};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter the number you want to search: ");

    scanf("%d", &key);
    int result = linearSearch(arr, size, key);
    if (result != -1)
    {
        printf("%d Element found at position %d", key, result + 1);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}

