#include <stdio.h>
int main()
{
	int N;
	int uang;
	int total = 0;
	
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d", &uang);
		total += uang;
	}
	printf("%d\n", total);
	
	return 0;
}
