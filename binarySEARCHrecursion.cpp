#include<stdio.h>

long long int binary(long long int left, long long int right, long long int number){
	if(left < right){
		long long int mid = left + (right-left)/2;
		long long rumus = mid * (mid + 1) * (2 * mid + 1) / 6;
		
		if(rumus >= number){
			return binary(left, mid, number);
		} else{
			return binary(mid+1, right, number);
		}
	}
	
	return left;
}

int main(){
	int t;
	scanf("%d", &t);
	
	for(int i = 1; i <= t; i++){
		long long int m;
		scanf("%lld", &m);
		
		long long int result = binary(1, 1999999, m);
		printf("Case #%d: %lld\n", i, result);
	}
	
	return 0;
}
