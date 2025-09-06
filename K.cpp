#include<stdio.h>
int main()
{
	char N[105]; char A[10];
	int U;
	scanf("%[^\n]", &N);
	scanf("%s", &A);
	scanf("%d", &U);
	printf("Name: %s\n", N);
	printf("NIS: %s\n", A);
	printf("Age: %d\n", U);
	return 0;
}
