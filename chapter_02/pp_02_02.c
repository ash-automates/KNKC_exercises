#include <stdio.h>

#define RADIUS 10
#define PI 3.1416f

int main(void)
{
    float volume = RADIUS * RADIUS * RADIUS * PI * (4.0f / 3.0f);
    printf("Volume of a sphere with 10 meters' radius: %f cubic meters\n", volume);    
    return 0;
}
