#include<stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	for(int i = 0; i < T; i++){
		int N;
		scanf("%d", &N);
		
		int bahan[N];
		int butuh[N];	
		int jojo[N];
		for(int j = 0; j < N; j++){
			scanf("%d", &bahan[j]);
		}
		for(int k = 0; k < N; k++){
			scanf("%d", &butuh[k]);
		}
		
		printf("Case #%d:", i + 1);
		for(int L = 0; L < N; L++){
			jojo[L] = bahan[L] - butuh[L];
			printf(" %d", jojo[L]);
		}

		printf("\n");
	}
	return 0;
}
