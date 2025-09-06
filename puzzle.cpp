#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int matriks[n+1][n+1];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &matriks[i][j]);
		}
	}
	
	int benar = 1;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			for(int k = 0; k < j; k++){
				if(matriks[i][j] == matriks[i][k]){
					benar = 0;
				}
				
				if(matriks[j][i] == matriks[k][i]){
					benar = 0;
				}
			}
		}
	}
	
	if(benar == 0){
		printf("Nay\n");
	} else {
		printf("Yay\n");
	}
	return 0;
}
