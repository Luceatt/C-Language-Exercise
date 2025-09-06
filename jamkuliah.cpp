#include <stdio.h>
int main()
{
	char strings[11];
	char strings1[11];
	char strings2[11];
	char strings3[11];
	char strings4[11];
	
	int a, b, c, d;
	int a1, b1, c1, d1;
	int a2, b2, c2, d2;
	int a3, b3, c3, d3;
	int a4, b4, c4, d4;
	
	scanf("%s %d:%d-%d:%d\n", strings, &a, &b, &c, &d);
	scanf("%s %d:%d-%d:%d\n", strings1, &a1, &b1, &c1, &d1);
	scanf("%s %d:%d-%d:%d\n", strings2, &a2, &b2, &c2, &d2);
	scanf("%s %d:%d-%d:%d\n", strings3, &a3, &b3, &c3, &d3);
	scanf("%s %d:%d-%d:%d", strings4, &a4, &b4, &c4, &d4);
	
	printf("%s %02d:%02d-%02d:%02d\n", strings, a - 1, b, c - 1, d);
	printf("%s %02d:%02d-%02d:%02d\n", strings1, a1 - 1, b1, c1 - 1, d1);
	printf("%s %02d:%02d-%02d:%02d\n", strings2, a2 - 1, b2, c2 - 1, d2);
	printf("%s %02d:%02d-%02d:%02d\n", strings3, a3 - 1, b3, c3 - 1, d3);
	printf("%s %02d:%02d-%02d:%02d\n", strings4, a4 - 1, b4, c4 - 1, d4);
	
	return 0;
}
