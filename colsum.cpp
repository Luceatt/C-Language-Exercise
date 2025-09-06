#include<stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	for(int i = 0; i < T; i++){
		int N;
		scanf("%d", &N);
		int matrix[N][N];
		int sumcol[N] = {0};
		
		for(int j = 0; j < N; j++){
			for(int k = 0; k < N; k++){
				scanf("%d", &matrix[j][k]);
				sumcol[k] += matrix[j][k];
			}
		}
		
		printf("Case #%d:", i + 1);
		for(int m = 0; m < N; m++){
			printf(" %d", sumcol[m]);
		}
		printf("\n");
	}
	return 0;
}
