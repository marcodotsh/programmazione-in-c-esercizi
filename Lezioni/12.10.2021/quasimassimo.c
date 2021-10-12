#include <stdio.h>
#define DIM 10

int main(void)
{
    int a[DIM], i, max, q_max;

    for(i=0;i<DIM;i++)
    {
        do
        {
            printf("Inserisci elemento %d: ", i + 1);
            scanf("%d", &a[i]);
        }while(a[i]<=0);
    }

    max=a[0];
    for(i=1;i<DIM;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    q_max=0;
    for(i=0;i<DIM;i++)
    {
        if(a[i] > q_max && a[i] < max)
        {
            q_max = a[i];
        }
    }

    printf("Il max è %d e il qmax è %d", max, q_max);

    return 0;
}
