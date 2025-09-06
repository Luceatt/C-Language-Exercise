#include <stdio.h>
int main ()
{
	int a, b, c;
	int ratusan, puluhan, satuan;
	int ratusan1, puluhan1, satuan1;
	int ratusan2, puluhan2, satuan2;
	
	scanf("%d\n", &a);
	scanf("%d\n", &b);
	scanf("%d", &c);
	
	ratusan = a / 100;
	puluhan = a - (ratusan * 100);
	satuan = puluhan / 10;
	
	ratusan1 = b / 100;
	puluhan1 = b - (ratusan1 * 100);
	satuan1 = puluhan1 / 10;
	
	ratusan2 = c / 100;
	puluhan2 = c - (ratusan2 * 100);
	satuan2 = puluhan2 / 10;
	
	printf("%d\n", satuan);
	printf("%d\n", satuan1);
	printf("%d\n", satuan2);
	
	return 0;
}
