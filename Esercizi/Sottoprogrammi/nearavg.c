#include <stdio.h>
#define DIM 30

int nearavg(float a[], int n); 

int main(void)
{
	float arr[DIM];
	int n, i, indx;

	do{
		printf("N elementi: ");
		scanf("%d", &n);
	}while(n<=0);

	for(i=0;i<n;i++) {
		printf("Elemento %d: ", i+1);
		scanf("%f", &arr[i]);
	}
	
	indx = nearavg(arr, n);

	printf("Indice elemento più vicino alla media aritmetica: %d\n", indx);

	return 0;
}

int nearavg(float a[], int n)
{
	int i;
	float avg, delta, min;
	avg=0;
	for(i=0;i<n;i++)
		avg += a[i];
	avg /= n;

	for(i=0;i<n;i++) {
		delta = (a[i]-avg>0) ? a[i]-avg : avg-a[i];
		if(delta<min || i==0){
			min=delta;
		}
	}
	
	for(i=0;i<n;i++) {
		delta = (a[i]-avg>0) ? a[i]-avg : avg-a[i];
		if(delta==min)
			return i;
	}
	
	return -1;
}

