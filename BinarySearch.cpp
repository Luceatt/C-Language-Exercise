#include<stdio.h>

long long int functionSearch(long long int left, long long int right, long long int m){
	if(left < right){
		long long int mid = left + (right-left) / 2;
		long long int sum = mid * (mid + 1) * (2 * mid + 1) / 6;
		
		if(sum >= m){
			return functionSearch(left, mid, m);
		} else{
			return functionSearch(mid+1, right, m);
		}
	}
	
	return left;
}

int main(){
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		long long m;
		scanf("%lld", &m);
		
		long long int result = functionSearch(1, 1500000, m);
		
		printf("Case #%d: %lld\n", i+1, result); 
		
//		printf("%d\n", m * (m + 1) * (2 * m + 1) / 6);
	}
	
	return 0;
}

//M = 1/6 * N * (N + 1) * (2N + 1);
//6 * M = N * (N + 1) * (2N + 1);

