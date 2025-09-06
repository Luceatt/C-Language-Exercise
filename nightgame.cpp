#include<stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	for(int i = 0; i < T; i++){
		
		int N;
		scanf("%d", &N);
		int arr[N];
		
		for(int j = 0; j < N; j++){
			scanf("%d", &arr[j]);
		}
		printf("Case #%d:", i+1);
		
		for(int k = N - 1; k >= 0; k--){
			printf(" %d", arr[k]);
		}
		printf("\n");
	}
	return 0;
}
