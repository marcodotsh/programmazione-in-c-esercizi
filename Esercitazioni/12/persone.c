#include <stdio.h>
#define DIM 30
#define LEN 30

typedef struct {
	char nom[LEN+1];
	char cog[LEN+1];
	char sex;
	int anno;
} persona_t;

persona_t get_youngest(persona_t *p, int n_pers);

int main(void)
{	
	persona_t persone[DIM], youngest;
	int i, n;
	FILE *fp;
	fp = fopen("persone.txt", "r");
	if(fp!=NULL) {
		fscanf(fp, "%d", &n);
		for(i=0;i<n;i++){
		/*	while(!feof(fp)) { */
				fscanf(fp, "%s %s %c %d", persone[i].nom, persone[i].cog, &persone[i].sex, &persone[i].anno);
			}
		/*}*/
		
		fclose(fp);

		youngest = get_youngest(persone, n);
		
		printf("Il più giovane è %s %s\n", youngest.nom, youngest.cog);
	}
	else
		printf("Errore apertura file.\n");

	return 0;
}

persona_t get_youngest(persona_t *p, int n_pers)
{
	int i, max;
	max = 0;
	for(i=0;i<n_pers;i++) {
		if((*(p+i)).anno>max||i==0) {
			max = (*(p+i)).anno;
		}
	}
	
	for(i=0;i<n_pers;i++) {
		if((*(p+i)).anno == max)
			return (*(p+i));
	}

}

