#include <stdio.h>

int main(void)
{
    int num, hundreds;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    hundreds = num / 100;
    printf("The reversal is: %d%d%d\n", num % 10, (num - 100 * hundreds) / 10, hundreds);

    return 0;
}
