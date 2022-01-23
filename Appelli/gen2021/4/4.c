#include <stdio.h>

#define N 4

void mediaperiferica(int Mat[][N], float Med[][N], int n)
{
	int i, j;
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(i==0 && j==0) {
				Med[i][j] = (Mat[i][j+1]+Mat[i+1][j]+Mat[i+1][j+1])/3.0;
			}
			else if(i==0 && j==n-1) {
				Med[i][j] = (Mat[i][j-1]+Mat[i+1][j-1]+Mat[i+1][j])/3.0;
			}
			else if(i==n-1 && j==0) {
				Med[i][j] = (Mat[i-1][j]+Mat[i-1][j+1]+Mat[i][j+1])/3.0;
			}
			else if(i==n-1 && j==n-1) {
				Med[i][j] = (Mat[i-1][j-1]+Mat[i-1][j]+Mat[i][j-1])/3.0;
			}
			else if(i==0) {
				Med[i][j] = (Mat[i][j-1]+Mat[i][j+1]+Mat[i+1][j-1]+
							Mat[i+1][j]+Mat[i+1][j+1])/5.0;
			}
			else if(i==n-1) {
				Med[i][j] = (Mat[i][j-1]+Mat[i][j+1]+Mat[i-1][j-1]+
							Mat[i-1][j]+Mat[i-1][j+1])/5.0;
			}
			else if(j==0) {
				Med[i][j] = (Mat[i-1][j]+Mat[i-1][j+1]+Mat[i][j+1]+
							Mat[i+1][j]+Mat[i+1][j+1])/5.0;
			}
			else if(j==n-1) {
				Med[i][j] = (Mat[i-1][j]+Mat[i-1][j-1]+Mat[i][j-1]+
							Mat[i+1][j]+Mat[i+1][j-1])/5.0;
			}
			else {
				Med[i][j] = (Mat[i-1][j-1]+Mat[i-1][j]+Mat[i-1][j+1]+
							Mat[i][j-1]+Mat[i][j+1]+Mat[i+1][j-1]+
							Mat[i+1][j]+Mat[i+1][j+1])/8.0;
			}
		}
	}

	return;
}

int main(void) 
{
	int Mat[N][N];
	float Med[N][N];
	int i, j;
	
	for(i=0;i<N;i++) {
		for(j=0;j<N;j++) {
			printf("Elemento [%d][%d]", i, j);
			scanf("%d", &Mat[i][j]);
		}
	}
	
	mediaperiferica(Mat, Med, N);

	for(i=0;i<N;i++) {
		for(j=0;j<N;j++) {
			printf("%d ", Mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<N;i++) {
		for(j=0;j<N;j++) {
			printf("%f ", Med[i][j]);
		}
		printf("\n");
	}
	
	return 0;

}
