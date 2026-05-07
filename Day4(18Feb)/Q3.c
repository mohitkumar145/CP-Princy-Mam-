


#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks :");
    scanf("%d", &marks);
    if(marks >= 75)
    {
        printf("Honours");
    }
    else if (marks < 75 && marks >= 65)
    {
         printf("1st");
    }
    else if (marks < 65 && marks >= 50)
    {
   printf("2nd");
    }
    else
    {
         printf("Fail");
    }
    return 0;
}
