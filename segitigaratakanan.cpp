#include<stdio.h>
int main()
{
	int M, N, spasi;
	scanf("%d %d", &M, &N);
	
	for(int i = 1; i <= M; i++){
		for(int j = 1; j <= N; j++){
			spasi = N - j;
			for(int m = 1; m <= spasi; m++){
				printf(" ");
			}
			for(int k = 1; k <= j; k++){
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}
