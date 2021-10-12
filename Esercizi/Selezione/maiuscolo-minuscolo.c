#include <stdio.h>

int main(void)
{
    char car;
    printf("Inserisci lettera dell'alfabeto: ");
    scanf("%c", &car);
    scanf("%*c");
    if(car<'A' || car>'z')
    {
        printf("Errore!\n");
    }else
    {
        if(car>='A' && car<='Z')
        {
            car = car + 32;
        }else
        {
            car = car - 32;
        }
    
        printf("Carattere convertito: %c\n", car);
    }

    return 0;
}
