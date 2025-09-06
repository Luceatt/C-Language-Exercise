#include<stdio.h>
//int count;
int sum(int n){
	if(n == 0){
		return 0;
	}
	return (n%10) + sum(n/10);
}

int main(){
	int n;
	scanf("%d", &n);
	
	int call = sum(n);
	printf("%d\n", call);
	
//	for(int i = 0; i <= n; i++){
//		int call = sum(i);
//		printf("%d ", call);	
//	}
	return 0;
}
