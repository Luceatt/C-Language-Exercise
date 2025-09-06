#include<stdio.h>
int fac(int num){
	if(num == 0 || num == 1){
		return 1;
	} else{
		return num * fac(num-1);
	}
}

int pascal(int n, int k){
	int result = fac(n) / (fac(n-k) * fac(k));
	return result;
//	n! / (n-k)! * k!
}

int main(){
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i <= n; i++){
		printf("%d", pascal(n, i));
		
		if(i < n){
			printf(" ");
		}
	}
	printf("\n");
	
	return 0;
}
