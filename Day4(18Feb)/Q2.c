

// By Nested If

// #include <stdio.h>
// int main()
// {
//     int age;
//     printf("Enter your age :");
//     scanf("%d", &age);
//     if(age <=13 && age < 18)
//     {
//         printf("You are teenager");
//     }
//      if(age >=18)
//     {
//          printf("you are eligible to vote");
//     }

//     return 0;
// }

// by else if

#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age :");
    scanf("%d", &age);
    if(age <=13 && age < 18)
    {
        printf("You are teenager");
    }
    else
    {
         printf("you are eligible to vote");
    }

    return 0;
}

