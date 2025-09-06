#include<stdio.h>
int main()
{
	int T, N;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++){
		scanf("%d", &N);
		int a[N];
		int counter = 0;
		int counter1 = 0;
		for(int j = 0; j < N; j++){
			scanf("%d", &a[j]);
			if(a[j] % 2 == 0){
				counter++;
			} else{
				counter1++;
			}
		}
		printf("Odd group : %d integer(s).\n", counter1);
		printf("Even group : %d integer(s).\n", counter);
		printf("\n");
	}
	return 0;
}
