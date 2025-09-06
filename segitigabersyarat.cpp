#include<stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++){
		int N, spasi;
		scanf("%d", &N);
		
		printf("Case #%d:\n", i+1);
		
		for(int j = 1; j <= N; j++){
			spasi = N - j;
			for(int k = 1; k <= spasi; k++){
				printf(" ");
			}
			for(int L = 1; L <= j; L++){
				if((j + (spasi + L)) % 2 == 0){
					printf("*");	
				} else{
					printf("#");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
