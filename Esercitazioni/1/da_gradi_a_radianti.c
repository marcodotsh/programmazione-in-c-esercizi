#include <stdio.h>
#define PI 3.14
#define ANGOLO_PIATTO_IN_GRADI 180
int main()
{  float angoloGradi, angoloRadianti;
   printf("Inserire l'angolo in gradi: ");
   scanf("%f", &angoloGradi);
   angoloRadianti = angoloGradi * PI / ANGOLO_PIATTO_IN_GRADI;
   printf("L'angolo di %.2f° in radianti e': %.2f rad\n", angoloGradi, angoloRadianti);
   return 0;
}