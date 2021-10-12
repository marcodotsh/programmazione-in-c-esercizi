#include <stdio.h>
#include <string.h>
#define DIM 20

int main(void)
{
    char s1[DIM+1], s2[DIM+2];
    int i;

    printf("Inserisci stringa: ");
    scanf("%s", s1);

    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
        {
            s2[i] = '*';
        } else
        {
            s2[i] = s1[i];
        }
    }
    s2[i] = '\0';

    printf("\n%s\n", s2);

    return 0;
}
