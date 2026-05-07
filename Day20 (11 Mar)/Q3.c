
#include <stdio.h>

void square(int n)
{
    printf("%d", n * n);
    printf("\n");
}

void cube(int n)
{
    printf("%d", n * n * n);
}
int main()
{
    square(4);
    cube(6);
    return 0;
}