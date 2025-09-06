#include <stdio.h>
int main()
{
	int N, M;
	
	scanf("%d %d", &N, &M);
	
	for (int i = 0; i < M + 1; i++) {
		//M adalah banyaknya bilangan yang ingin dimunculkan
		printf("%d\n", N + i);
	}
	
	return 0;
}
