#include<stdio.h>
void call(int x){
	if(x > 0){
		call(x-1);
		printf("%d ", x);
	}
	else{
		return;
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	
	call(n);
	
	printf("\n");
	
	return 0;
}
