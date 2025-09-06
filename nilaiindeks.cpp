#include<stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int indeksarr[N];
	int nilai[N];
	for(int i = 0; i < N; i++){
		scanf("%d", &indeksarr[i]);
	}
	
	for(int j = 0; j < N; j++){
		scanf("%d", &nilai[indeksarr[j]]);
	}
	
	for(int k = 0; k < N; k++){
		printf("%d", nilai[k]);
		if(k < N-1){
			printf(" ");
		}
	}
	printf("\n");
	
	return 0;
}
