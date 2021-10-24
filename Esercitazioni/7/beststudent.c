#include <stdio.h>
#include <string.h>
#define LEN 30
#define DIM 100
typedef struct
{
	int voto;
	char nome[LEN+1];
} studente_t;

int main(void)
{
	int n, i, max;
	studente_t studenti[DIM];

	max=0;

	do
	{
		printf("Inserire numero studenti (max 99): ");
		scanf("%d", &n);
	}while(n<=0 || n>=100);

	for(i=0;i<n;i++)
	{
		do
		{
			printf("Inserire nome studente %d: ", i + 1);
			scanf(" %[^\n]", studenti[i].nome);
		}while(strlen(studenti[i].nome)>LEN);
		do
		{
			printf("Inserire voto studente %d: ", i + 1);
			scanf("%d", &studenti[i].voto);
		}while(studenti[i].voto<=0 || studenti[i].voto>30);
	}

	for(i=0;i<n;i++)
	{
		if(studenti[i].voto>max)
		{
			max=studenti[i].voto;
		}
	}

	printf("Studenti con voto massimo:\n");
	for(i=0;i<n;i++)
	{
		if(studenti[i].voto==max)
		{
			printf("Nome: %s\tVoto: %d\n", studenti[i].nome, studenti[i].voto);
		}
	}
	return 0;
}
