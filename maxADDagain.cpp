#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int angka[n+2];
	for(int i = 1; i <= n; i++){
		scanf("%d", &angka[i]);
	}
	
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		long long int length;
		scanf("%lld", &length);
		
		int max = 0;
		long long int sum = 0;
		int start = 1;
		for(int end = 1; end <= n; end++){
			sum += angka[end];
			
			while(sum > length){
				sum -= angka[start];
				start++;
			}
			
			int curr = end - start + 1;
			if(curr > max){
				max = curr;
			}
		}
		
		if(max > 0){
			printf("Case #%d: %d\n", i+1, max);
		}else{
			printf("Case #%d: -1\n", i+1);
		}
	}
	
	
	return 0;
}
