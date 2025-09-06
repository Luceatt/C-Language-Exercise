#include<stdio.h>
int fibo(int n, int num1, int num2){
	if(n == 0)
		return num1;
	else if(n == 1)
		return num2;
	else{
		return fibo(n - 1, num1, num2) + fibo(n - 2, num1, num2); 
	}	
}

int main()
{
	int num1, num2;
	int n;
	
	scanf("%d %d", &num1, &num2);
	scanf("%d", &n);
	
	printf("%d\n", fibo(n, num1, num2));
	
	
	return 0;
}
