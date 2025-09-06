#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int matriks[n+2][n+2];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &matriks[i][j]);
		}
	}
	
	int counter = 0;
	for(int i = 1; i <= n; i++){
		int benar = 0;
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				if(matriks[j][k] == i){
					benar++;
				}
			}
		}
		if(benar < n){
			counter++;
		}
	}
	
	printf("%d\n", counter);
	
	return 0;
}
