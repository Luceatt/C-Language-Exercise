#include<stdio.h>

int formula(int n){
	if(n == 1)
		return 1;
	else if(n % 2 != 0)
		return formula(n - 1) + formula(n + 1);
	else if(n % 2 == 0)
		return formula(n / 2);
}

int main()
{
	int t;
	scanf("%d", &t);
	int n;
	
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
		printf("Case #%d: %d\n", i, formula(n));
	}
	
	return 0;
}
