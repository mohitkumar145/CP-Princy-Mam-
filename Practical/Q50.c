// #include <stdio.h>

// void swap(int *a, int *b) {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int x, y;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &x, &y);

//     swap(&x, &y);

//     printf("After swapping: x=%d y=%d", x, y);

//     return 0;
// }

// #include <stdio.h>

// void swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main()
// {
//     int x, y;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &x, &y);
//     swap(&x, &y);

//     printf("After swapping: x=%d y=%d", x, y);

//     return 0;
// }

#include <stdio.h>

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}
int main()
{
    int arr[] = {5, 4, 84, 67, 7, 8, 4, 3, 2, 1};
    int n = 10;

    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}