#include<stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	for(int m = 0; m < T; m++){
		int N;
		scanf("%d", &N);
		int jojo[N];
		int nilai[N];
		int counter = 0;
		
		for(int i = 0; i < N; i++){
			scanf("%d", &jojo[i]);
		}
	
		for(int j = 0; j < N; j++){
			scanf("%d", &nilai[j]);
		}
		
		for(int k = 0; k < N; k++){
			if(jojo[k] < nilai[k]){
				counter++;
			}
		}
		printf("Case #%d: %d\n", m+1, counter);
	}
	return 0; 
}
