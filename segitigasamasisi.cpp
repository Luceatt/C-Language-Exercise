#include<stdio.h>
int main()
{
	int T, N, spasi;
	scanf("%d", &T);
	
	for(int i = 1; i <= T; i++){
		scanf("%d", &N);
		for(int j = 1; j <= N; j++){
			spasi = N - j;
			for(int m = 1; m <= spasi; m++){
				printf(" ");
			}
			for(int k = 1; k <= j; k++){
				printf("*");
			}
			for(int o = 1; o < j; o++){
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}
