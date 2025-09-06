#include<stdio.h>

int count = 0;

int fibo(int n){
	count++;
	if(n == 0)
		return 0;
	else if(n == 1)
		return 1;
	else
		return fibo(n - 1) + fibo(n - 2);
}

int main()
{
	int t, n;
	scanf("%d", &t);
	
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
		
		int result = fibo(n);
		
		printf("Case #%d: %d\n", i, count);
		count = 0;
	}
	
	return 0;
}
