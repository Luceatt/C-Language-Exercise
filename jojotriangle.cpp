#include<stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	int a, b, c;
	int total = 0;
	
	for(int i = 0; i < T; i++){
		scanf("%d %d %d", &a, &b, &c);
		total = a + b;
		if(total > c){
			printf("BISA\n");
		} else{
			printf("TIDAK BISA\n");
		}
	}
	return 0;
}
