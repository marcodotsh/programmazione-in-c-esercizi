#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SMAX 100

typedef struct {
	char *nom;
	char *cog;
	char sex;
	int anno;
} persona_t;

char *dup_string(char s[]);

persona_t input_per();

void output_per(persona_t *p);

persona_t *clona_per(persona_t *p);

void free_per(persona_t *p);

int main()
{
	persona_t p1, *p2;
	
	p1 = input_per();
	p2 = clona_per(&p1);
	
	if(p2) {
		p2->anno = 1995;
		p2->nom[0] = 'A';

		output_per(&p1);
		output_per(p2);

		free_persona(p2);
	}
	
	free(p1.nom);
	free(p1.cog);

	return 0;
}

persona_t input_per()
{
	persona_t p;
	char str[SMAX+1];
	
	printf("Nome: ");
	scanf("%s", str);
	p.nom = dup_string(str);
	printf("Cognome: ");
	scanf("%s", str);
	p.cog = dup_string(str);
	printf("Sesso: ");
	scanf(" %c", &p.sex);
	printf("Anno nascita: ");
	scanf("%d", &p.anno);

	return p;
}

void output_per(persona_t *p)
{
	printf("Nome: %s\n", p->nom);
	printf("Cognome: %s\n", p->cog);
	printf("Sesso: %c\n", p->sex);
	printf("Anno nascita: %d\n\n", p->anno);
}

persona_t *clona_per(persona_t *p)
{
	persona_t *ris;

	ris = malloc(sizeof(persona_t));
	if(ris) {
		ris->nom = dup_string(p->nom);
		ris->cog = dup_string(p->cog);
		ris->sex = p->sex;
		ris->anno = p->anno;
	}
	else
		printf("Errore allocazione\n");
	
	return ris;
}

void free_per(persona_t *p)
{
	free(p->nom);
	free(p->cog);
	free(p);
}

char *dup_string(char s[])
{
	int len, i;
	char *p;
	len = strlen(s);

	p = malloc(sizeof(char)*len+1);
	if(p) {
		for(i=0;i<=len;i++) {
			*(p+i) = s[i];
		}
	}
	else
		printf("Errore allocazione memoria\n");
		
	return p;
}
