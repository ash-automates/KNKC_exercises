#include <stdio.h>

int main(void)
{
    int i, j, result;

    printf("Enter two integers separated by a space: ");
    scanf("%d %d", &i, &j);

    result = (i > j) - (i < j);

    printf("Comparison result: %d\n", result);
    printf("  -1 means %d is less than %d\n", i, j);
    printf("   0 means %d is equal to %d\n", i, j);
    printf("  +1 means %d is greater than %d\n", i, j);

    return 0;
}