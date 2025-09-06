#include<stdio.h>
int main()
{	
	int n;
	scanf("%d", &n);
	
	int counter = 0, total = 0;
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= n-i; j++){
			total = n - i -j;	
				
			if(total >= 0){
					counter++;
			}
				printf("Total: %d\n", total);

		}
	}
	printf("%d\n", counter);
	return 0;
}
