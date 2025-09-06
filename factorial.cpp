#include<stdio.h>

long long int fac(long long int n){
	if(n == 0 || n == 1){
		return 1;
	}
	else{
		return (n * fac(n - 1)) % 1000000007;
	} 
}

int main(){
	int t;
	scanf("%d", &t);
	
	for(int i = 1; i <= t; i++){
		int n;
		scanf("%d", &n);
		
		long long int total = 1;
		for(int j = 0; j < n; j++){
			long long int nilai;
			scanf("%lld", &nilai);
			
			long long int call = fac(nilai);
			
			total = (total * call) % 1000000007;
		}
//		total = total % 1000000007;
		
		printf("Case #%d: %lld\n", i, total);
		
	}
	return 0;
}
