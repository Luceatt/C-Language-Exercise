#include <stdio.h>
int main()
{
	int N;
	int a;
	int total = 0;
	scanf("%d", &N);
	
	for(int i = 1; i <= N; i++){
		scanf("%d", &a);
		total += a;
	}
	printf("%d\n", total);
	
	return 0;
}
