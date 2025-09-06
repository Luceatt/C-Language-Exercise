#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int i = 0; i < t; i++){
		int n;
		long long int m;
		scanf("%d %lld", &n, &m);
		
		int angka[n+5];
		for(int j = 1; j <= n; j++){
			scanf("%d", &angka[j]);
		}
		
		int max = 0;
		long long int sum = 0;
		int start = 1;
		for(int end = 1; end <= n; end++){
			sum += angka[end];
			
			while(sum > m){
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
