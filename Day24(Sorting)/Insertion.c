#include <stdio.h>

// Function for Insertion Sort
void insertionSort(int arr[], int n)
{
    int i, j, key;

    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        // Shift elements greater than key
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Main function
int main()
{
    int arr[] = {5, 2, 9, 1, 6};
    int n = 5;

    insertionSort(arr, n);

    printf("Sorted array: ");
 for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}