#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	int n;
	
	for(int i = 0; i < t; i++){
		scanf("%d", &n);
		int matrix1[n+1][n+1];
		int matrix2[n+1][n+1];
		int matrix3[n+1][n+1];
		int matrixtot[n+1][n+1];
		int matrixakhir[n+1][n+1];
		
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				scanf("%d", &matrix1[j][k]);
			}
		}
		
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				scanf("%d", &matrix2[j][k]);
			}
		}
		
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				scanf("%d", &matrix3[j][k]);
			}
		}
		
		// PERHITUNGAN
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				matrixtot[j][k] = 0;
				for(int m = 0; m < n; m++){
					matrixtot[j][k] += matrix1[j][m] * matrix2[m][k];
				}
//				printf("%d", matrixtot[j][k]);
//				
//				if(k < n-1){
//					printf(" ");
//				}
			
			}
//			printf("\n");
		}
		printf("Case #%d:\n", i+1);
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				matrixakhir[j][k] = 0;
				for(int m = 0; m < n; m++){
					matrixakhir[j][k] += matrixtot[j][m] * matrix3[m][k];
				}
				printf("%d", matrixakhir[j][k]);
				
				if(k < n-1){
					printf(" ");
				}
			
			}
			printf("\n");
		}
	}

	return 0;
}
