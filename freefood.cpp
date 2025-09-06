#include<stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++){
		int N, harga;
		scanf("%d %d", &N, &harga);
		
		int arr[N];
		int total = 0;
		for(int j = 0; j < N; j++){
			scanf("%d", &arr[j]);
			total += arr[j];
		}
		
		printf("Case #%d: ", i+1);
		if(total <= harga){
			printf("No worries");
		} else{
			printf("Wash dishes");
		}
		printf("\n");
		
	}
	return 0;
}
