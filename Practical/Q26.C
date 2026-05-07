// // Binary Search Without Function

// #include <stdio.h>
// int main()
// {
//     int size;
//     printf("Enter the No of elemnts in an array");
//     scanf("%d", &size);
//     int arr[size], start, end, mid, search;
//     printf("enter the array elements");
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the number you want to search");
//     scanf("%d", &search);
//     start = 0, end = size - 1;
//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;
//         if (arr[mid] == search)
//         {
//             printf("Element found at index %d", mid);
//             break;
//         }
//         else if (arr[mid] < search)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     if (start > end)
//     {
//         printf("Element not found");
//     }

//     return 0;
// }

#include <stdio.h>

// Function for Binary Search
int binarySearch(int arr[], int size, int key)
{
    int low = 0, high = size - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, result;
    printf("Enter the number you want to search: ");
    scanf("%d", &key);
    int low = 0, high = size - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    // result = binarySearch(arr, size, key);
    if (result != -1)
        printf("%d Element found at position %d", key, result + 1);
    else
        printf("Element not found");

    return 0;
}


