#include<stdio.h>
int main()
{
	int t = 3;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		long long int x;
		int p;
		scanf("%lld %d", &x, &p);
		
		int benar = 0;
		if((x & (1 << p)) > 0){
			benar = 1;		
		} 
		
		if(benar == 1){
			printf("1\n");
		} else{
			printf("0\n");
		}
	}
	return 0;
}
