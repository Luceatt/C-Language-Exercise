#include<stdio.h>
int job(int n){
	if(n == 0)
		return 0;
	else if(n == 1)
		return 1;
	else if(n % 2 != 0)
		return 1;
	else
		return job(n - 1) + job(n - 2);
}

int main()
{
	int n;
	scanf("%d", &n);
	
	printf("%d\n", job(n));
	return 0;
}
