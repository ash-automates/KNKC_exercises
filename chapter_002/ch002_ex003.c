#include <stdio.h>

#define PI 3.1415927f
#define RATIO (4.0f/3.0f) 

int main(void)
{
    float radius;
    printf("Please enter a radius:\n");
    scanf("%f", &radius);
    float volume = (radius*radius*radius) * PI * RATIO;
    printf("The volume of a sphere radius %.1f is %.2f\n", radius, volume);
    return 0;
}
