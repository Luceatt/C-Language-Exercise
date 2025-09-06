#include<stdio.h>

long long int searchSum(long long int sum[], long long int left, long long int right, long long int target){
	long long int hasil = -1;
	while(left <= right){
		long long int mid = left + (right - left) / 2;
		
		if(sum[mid] <= target){
			left = mid + 1;
			hasil = mid;
		} else{
			right = mid - 1;
		}
	}
	
	return hasil;
}

int main(){
	long long int t;
	scanf("%lld", &t);
	
	long long int arr[t+1] = {0};
	for(long long int i = 1; i <= t; i++){
		scanf("%lld", &arr[i]);
	}
	
	long long int sum[t+1] = {0};
	sum[1] = arr[1];
	for(long long int i = 2; i <= t; i++){
		sum[i] = sum[i-1] + arr[i];
	}
	
	long long int n;
	scanf("%lld", &n);
	
	for(long long int i = 1; i <= n; i++){
		long long int target;
		scanf("%lld", &target);
		
//		for(long long int j = 0; j < t; j++){
//			printf("%lld ", arr[j]);
//		}
//		printf("\n");
		
		long long int result = searchSum(sum, 1, t, target);
		
		if(result == -1){
			printf("Case #%lld: -1\n", i);
		} else{
			printf("Case #%lld: %lld\n", i, result);
		}
		
	}
	return 0;
}
