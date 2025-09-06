#include<stdio.h>
void sort(int array[], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-i-1; j++){
			if(array[j] > array[j+1]){
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}

int main(){
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		int n;
		scanf("%d", &n);
		
		int array[n+1];
		
		for(int j = 0; j < n; j++){
			scanf("%d", &array[j]);
		}
		
		sort(array, n);
		
		int matriks[2][n/2];
		
		int indexArr = 0;
		for(int j = 0; j < 2; j++){
			for(int k = 0; k < n/2; k++){
				matriks[j][k] = array[indexArr];
				indexArr++;
			}
		}
		
		int max = 0;
		int selisih = 0;
		for(int j = 0; j < 2; j++){
			for(int k = 0; k < (n/2) - 1; k++){
				selisih = matriks[j][k+1] - matriks[j][k];
				
				if(max < selisih){
					max = selisih;
				}
			}
		}
		
		printf("Case #%d: %d\n", i+1, max);
		
	}
	
	return 0;
}
