#include<stdio.h>
int main()
{
	int N;
	long long int P;
	scanf("%d %lld", &N, &P);
	
	long long int arr[N+2];
	long long int counter = 0;
	for(int i = 0; i < N; i++){
		scanf("%lld", &arr[i]);
		
		if(arr[i] < P){
			counter++;
		}
	}
	
	printf("%lld\n", counter);	
	
	return 0;
}
