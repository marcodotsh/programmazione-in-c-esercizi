#include <stdio.h>

int main(void)
{
    int ncinquanta, nventi, ndieci, ncinque, tot;
    printf("Inserisci il numero di banconote da 50 euro: ");
    scanf("%d", &ncinquanta);
    printf("Inserisci il numero di banconote da 20 euro: ");
    scanf("%d", &nventi);
    printf("Inserisci il numero di banconote da 10 euro: ");
    scanf("%d", &ndieci);
    printf("Inserisci il numero di banconote da 5 euro: ");
    scanf("%d", &ncinque);
    
    tot = 50 * ncinquanta + 20 * nventi + 10 * ndieci + 5 * ncinque;
    printf("Hai %d soldi!\n", tot);
    
    return 0;
}
