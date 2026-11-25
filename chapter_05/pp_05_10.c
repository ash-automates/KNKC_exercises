#include <stdio.h>

int main(void)
{
    int score;
    printf("Enter numerical grade: ");
    scanf("%d", &score);
    if (score < 0 || score > 100)
    {
        printf("Please select a score between 0 and 100...\n");
    }
    else
    {
        printf("Letter grade: ");
        switch (score / 10)
        {
        case 0: case 1: case 2: case 3: case 4: case 5:
            printf("F");
            break;
        case 6:
            printf("D");
            break;
        case 7:
            printf("C");
            break;
        case 8:
            printf("B");
            break;
        default:
            printf("A");
            break;
        }
        printf("\n");
    }
    
    return 0;
}
