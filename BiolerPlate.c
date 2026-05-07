
#include <stdio.h>
int main() {
    
    return 0;
}


#include <stdio.h>
int main() {
    int n, temp, rem, sum = 0, digits = 0, i;
    
    printf("Enter Number: ");
    scanf("%d", &n);

    temp = n;

    // count digits
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    // calculate sum
    while(temp != 0) {
        rem = temp % 10;

        int power = 1;
        for(i = 1; i <= digits; i++)
            power *= rem;

        sum += power;
        temp /= 10;
    }

    if(sum == n)
        printf("%d is Armstrong", n);
    else
        printf("%d is Not Armstrong", n);

    return 0;
}