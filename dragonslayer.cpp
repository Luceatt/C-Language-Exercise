#include<stdio.h>
int main()
{
	int T;
	int N;
	scanf("%d %d", &T, &N);
	int arr1[T];
	int arr2[N];
	int bibi = 0;
	int dragon = 0;
	
	for(int i = 0; i < T; i++){
		scanf("%d", &arr1[i]);
		if(bibi < arr1[i]){
			bibi = arr1[i];
		}
	}
	
	for(int i = 0; i < N; i++){
		scanf("%d", &arr2[i]);
		if(dragon < arr2[i]){
			dragon = arr2[i];
		}
	}
	
	if(bibi > dragon){
		printf("The dark secret was true\n");
	} else{
		printf("Secret debunked\n");
	}
	
	return 0;
}
