#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		long long int n, x;
		scanf("%lld %lld", &n, &x);
		
		long int counter = 0;
		long int counter2 = 0;
		printf("Case #%d: ", i+1);
		
//		GENAP (BERES)
		if(n % 2 == 0){
			if(x == 1 || x == n){
				printf("0\n");
			} else{
				for(long long int j = 1; j <= (x/2); j++){
					counter++;
				}
//				printf("Counter 1: %d\n", counter);
				for(long long int j = 0; j <= (n-x-1)/2; j++){
					counter2++;
				}
//				printf("Counter 2: %d\n", counter2);
				if(counter < counter2){
					printf("%lld\n", counter);
				} else{
					printf("%lld\n", counter2);
				}
			}
		} 
		
//		GANJIL
		else{
			if(x == 1 || x == n || x == n-1){
				printf("0\n");
			} else{
				for(long long int j = 1; j <= (x/2); j++){
					counter++;
				}
//				printf("Counter 1: %d\n", counter);
				for(long long int j = 0; j <= (n-x-2)/2; j++){
					counter2++;
				}
//				printf("Counter 2: %d\n", counter2);
				if(counter < counter2){
					printf("%lld\n", counter);
				} else{
					printf("%lld\n", counter2);
				}
			}
		}
	}
	return 0;
}
