#include<stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	int N;
	
	for(int i = 0; i < T; i++){
		scanf("%d", &N);
		int nilai[N];
		int maks = 0;
		int counter = 0;
		for(int j = 0; j < N; j++){
			scanf("%d", &nilai[j]);
			if(maks < nilai[j]){
				maks = nilai[j];
				counter = 1;
			} else if(nilai[j] == maks){
				counter++;
			}
		}
		printf("Case #%d: %d\n", i+1, counter);
		
	}
	return 0;
}
