#include<stdio.h>

long long int reversedNum(long long int num){
	long long int reversed = 0;
	while(num > 0){
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}
	return reversed;
}

int main()
{
	long long int t;
	scanf("%lld", &t);
	
	for(long long int i = 0; i < t; i++){
		long long int num;
		scanf("%lld", &num);
		
		long long int reverse = reversedNum(num);
		long long int total = 0;
		total = num + reverse;
		
		printf("Case #%lld: %lld\n", i+1, total);
	}
	
	return 0;
}
