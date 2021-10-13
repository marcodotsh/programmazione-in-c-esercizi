#include <stdio.h>

int main(void)
{
    int n1, n2, quoziente, mcd, mcm, resto;
    printf("Inserisci n1: ");
    scanf("%d", &n1);
    printf("Inserisci n2: ");
    scanf("%d", &n2);
    if(n1>n2)
    {
        quoziente = n2;
        mcd = n1;
    }else
    {
        quoziente = n1;
        mcd = n2;
    }
    while(quoziente>0)
    {
        resto = mcd % quoziente;
        mcd = quoziente;
        quoziente = resto;
    }
    mcm = n1 * n2 / mcd;
    printf("MCD: %d\nmcm: %d\n", mcd, mcm);
    
    return 0;
}
