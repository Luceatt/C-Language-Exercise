#include<stdio.h>
int main()
{
	char string[102];
	int age;
	scanf("%[^\n]", string);
	scanf("%d", &age);
	
	printf("Halo nama saya %s dan umur saya %d\n", string, age);
	
	return 0;
}
