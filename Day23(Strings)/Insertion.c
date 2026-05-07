
// sort an array with the help of BubbleSort

#include <stdio.h>
void insertion(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
};

int main()
{

    int arr[] = {9, 7, 6, 78, 1, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    // printf("%d ", n);
    bubbleSort(arr, n);
}
