#include <stdio.h>
int main()
{
	int N, i, k = 0;

	scanf("%d", &N);
	int array [N];
	
	for (i = 1; i <= N; i++){
		scanf("%d", &array[i]);
		k+=array[i];
		
		if(k == 30){
			k = 10;
		}
		else if(k == 12){
			k = 28;
		}
		else if(k == 35){
			k = 7;
		}
		else if(k == 40){
			k -= 40;	
		}

	}
	printf("%d\n", k);
	
	return 0;
}
