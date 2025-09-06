#include<stdio.h>
#include<math.h>
int main()
{
	long long int t;
	scanf("%lld", &t);
	
	for(long long int i = 0; i < t; i++){
		long long int n;
		scanf("%lld", &n);
		long long int arr[n+2];
		
		for(long long int j = 0; j < n; j++){
			scanf("%lld", &arr[j]);
		}
		
		long long int selisih[n+2] = {0};
		for(long long int j = 0; j < n; j++){
			selisih[j] = fabs(arr[j] - arr[j+1]);
		}
		
		long long int min = 1000000002;
		for(long long int j = 0; j < n-1; j++){
			if(min > selisih[j]){
				min = selisih[j];
			} 
		}
		printf("Case #%lld: %lld\n",i+1, min);
	}
	return 0;
}
