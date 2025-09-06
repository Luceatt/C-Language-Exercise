#include <stdio.h>
int main()
{
	int A, B;
	int hasil, hasil1, hasil2, hasil3, hasil4;
	scanf("%d %d", &A, &B);
	
	hasil = A + B;
	hasil1 = A - B;
	hasil2 = A * B;
	hasil3 = A / B;
	hasil4 = A % B;
	
	printf("%d\n", hasil);
	printf("%d\n", hasil1);
	printf("%d\n", hasil2);
	printf("%d\n", hasil3);
	printf("%d\n", hasil4);
	
	return 0;
}
