#include <stdio.h>
int main()
{
	int X, Y;
	int X1, Y1;
	int X2, Y2;
	int X3, Y3;
	
	scanf("%d %d\n", &X, &Y);
	scanf("%d %d\n", &X1, &Y1);
	scanf("%d %d\n", &X2, &Y2);
	scanf("%d %d", &X3, &Y3);
	
	printf("%d\n", X * Y);
	printf("%d\n", X1 * Y1);
	printf("%d\n", X2 * Y2);
	printf("%d\n", X3 * Y3);
	
	return 0;
}

