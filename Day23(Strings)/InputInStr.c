// //  i scanf ignore after white spaces

// #include <stdio.h>

// int main() {
//     char str[100];

//     printf("Enter your name: ");
//     scanf("%s", str);

//     printf("You entered: %s", str);

//     return 0;
// }

// // ii gets(str) // its outdated

// #include <stdio.h>

// int main()
// {
//     char str[100];
//     printf("Enter your name: ");
//     gets(str);

//     printf("%s", str);

//     return 0;
// }

// 3. Using fgets(str, size, stdin) ✅ BEST

#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter your name: ");
    fgets(str, 100, stdin);
    printf("%s", str);

    return 0;
}

// Out Put in strings

// 🔹 1. Using printf()
// ✔ Concept
// Most commonly used
// Requires format specifier %s

#include <stdio.h>

int main()
{
    char str[] = "Mohit";

    printf("%s", str);

    return 0;
}

// O.P :- Mohit

// M -2
// 2. Using puts()
// ✔ Concept
// Directly prints string
// Automatically adds newline (\n)

#include <stdio.h>

int main()
{
    char str[] = "Mohit";

    puts(str);

    return 0;
}

