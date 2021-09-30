#include <stdio.h>

int main(void)
{
    int height, length, width, volume;

    printf("Insert height: ");
    scanf("%d", &height);
    printf("Insert length: ");
    scanf("%d", &length);
    printf("Insert width: ");
    scanf("%d", &width);

    volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", height, length, width);
    printf("Volume: %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}

