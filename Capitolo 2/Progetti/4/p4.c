#include <stdio.h>
#define TAXES 0.05f

int main(void)
{
    float money;

    printf("Insert the amount of money: ");
    scanf("%f", &money);

    printf("Final cost with taxes applied: %.2f$\n", money * (1 + TAXES));

    return 0;
}
