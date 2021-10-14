#include <stdio.h>
#define DIM 5
int main(void)
{
	int n[DIM], i, j, max;

    for(i=0;i<DIM;i++)
    {
        do
        {
            printf("Inserisci n%d: ", i+1);
            scanf("%d", &n[i]);
        }while(n[i]<=0);
    }

    max = n[0];
	for(i=1;i<DIM;i++)
    {
        if(n[i]>max)
        { max = n[i]; }
    }

    for(i=0;i<max;i++)
    {
        for(j=0;j<DIM;j++)
        {
            if(n[j]>=(max-i))
            {
                printf("* ");
            }else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    for(i=0;i<DIM;i++)
    {
        printf("%d ", n[i]);
    }
    printf("\n");

    return 0;
}
