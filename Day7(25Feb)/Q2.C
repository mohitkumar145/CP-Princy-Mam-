

#include <stdio.h>
int main()
{
    int a[3][3] = {
        {1, 92, 3},
        {4, 5, 6},
        {7, 87, 92},
    };
    int maxArr = a[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (maxArr < a[i][j])
            {
                maxArr = a[i][j];
            }
        }
    }
    printf("maxArr = %d", maxArr);
    return 0;
}