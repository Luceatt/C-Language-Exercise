#include<stdio.h>
int angka(int n){
	if(n == 1)
		return n;
	else if(n % 2 == 0)
		return n/2;
	else
		return n * 3 + 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	
	for(int i = 1; i <= t; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		
		int num = 0;
		if(a == b){
			num = a;
		}
		else{
			while(a > 1){
				int call = angka(a);
				a = call;
				
//				printf("ANGKA A: %d\n", a);
				if(a == b){
					num = a;
					break;
				} 
			}
			num = a;
		}
		
		printf("Case #%d: ", i);
		if(num == b){
			printf("YES\n");
		} else{
			printf("NO\n");
		}
	}
	
	return 0;
}
