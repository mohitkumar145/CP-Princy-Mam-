
// 👉 (Assuming: replace characters at odd positions with *)

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    gets(str); // or use fgets in modern C

    // while (str[i] != '\0')
    // {
    //     if (i % 2 != 0) // odd index (position)
    //     {
    //         str[i] = '*';
    //     }
    //     i++;
    // }


    // Using For Loop
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 != 0) // odd index (position)
        {
            str[i] = '*';
        }
    }
    printf("Modified string: %s", str);
    return 0;
}