#include <stdio.h>

#define RADIUS 10.0f
#define PI 3.1415927f
#define RATIO (4.0f/3.0f) 

int main(void)
{
    float volume = (RADIUS*RADIUS*RADIUS) * PI * RATIO;
    printf("The volume of a sphere radius %.1f is %.2f\n", RADIUS, volume);
    return 0;
}
