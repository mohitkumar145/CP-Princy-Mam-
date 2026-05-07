

#include <stdio.h>
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("a = ");
    printf("%d",a);
    printf("\n");
    printf("b = ");
    printf("%d",b);
}

int main()
{
    swap(7, 5);
    return 0;
}