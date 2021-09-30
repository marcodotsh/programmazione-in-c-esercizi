#include <stdio.h>
#define PI 3.14f

int main(void)
{
    float radius, volume;

    printf("Insert radius in meters: ");
    scanf("%f", &radius);

    volume = 4.0f / 3.0f * PI * radius * radius * radius;

    printf("Volume of a sphere of radius %.2fm in m^3: %.2f\n", radius, volume);

    return 0;
}
