#include <stdio.h>

int main(void)
{
    int anno, bisestile;
    bisestile = 0; /* 0 se non è bisestile, 1 se lo è */
    printf("Inserisci anno: ");
    scanf("%d", &anno);
    if((!(anno % 4) && (anno % 100)) || !(anno % 400))
    {
        bisestile = 1;
    }
    printf("%d\n", bisestile);
    
    return 0;
}
