


#include <stdio.h>
double PI = 3.14;


double area(int r)
{
     double Area = PI * (r * r);
     printf("%2f", Area);
     return Area;
}

int main()
{
    area(7);

    return 0;
}