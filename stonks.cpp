#include<stdio.h>
int main()
{
	long long int N;
	scanf("%lld", &N);
	long long int arr[N];
	long long int total = 0;
	
	for(long long int i = 0; i < N; i++){
		scanf("%lld", &arr[i]);
		if(arr[i] < 0){
			continue;
		} else{
			total += arr[i];
		}
	}
	printf("%lld\n", total);
	
	return 0;
}
