
// #include <stdio.h>
// int main()
// {
//   int a[2] = {1, 2};
//   // int a[10];
//   // for (int i = 0; i < 10; i++)
//   // {
//   //     printf("%d" , a[i] = a[i - 1] + a[i - 2]);
//   // }
//   printf("%d", a[78]);
//   return 0;
// }

// IP In 2d Array

#include <stdio.h>
int main()
{
  int arr[2][2];
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  
  printf("%d", arr[0][1]);
  printf(" %d", arr[1][0]);
  return 0;
}
