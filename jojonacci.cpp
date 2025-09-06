#include<stdio.h>
int fibo(int n, int num1, int num2){
	if(n == 0)
		return num1;
	else if(n == 1)
		return num2;
	else{
		return fibo(n - 1, num1, num2) - fibo(n - 2, num1, num2); 
	}	
}

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int num1, num2;
		int n;
		
		scanf("%d %d %d", &n, &num1, &num2);
		
		printf("Case #%d: %d\n", i, fibo(n, num1, num2));
	}
	return 0;
}
