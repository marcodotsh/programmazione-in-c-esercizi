#include <stdio.h>
#include <string.h>
#define DIM 30

int main(void)
{
    char str[DIM+1];
    int i, max, temp_max;
    max = 0;
    temp_max = 0;

    printf("Inserisci frase: ");
    scanf("%[^\n]", str);

    for(i=0;i<(int)(strlen(str)+1);i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            if(temp_max>max)
            {
                max = temp_max;
            }
            temp_max = 0;
        }else
        {
            temp_max++;
        }
    }
    printf("Lunghezza parola max: %d\n", max);
    return 0;
}
