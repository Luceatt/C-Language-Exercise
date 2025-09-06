#include<stdio.h>
#include<string.h>
struct menuMakanan{
	char namaMenu[100];
	int harga;
};

void isiMenu(struct menuMakanan *mn1){
	strcpy(mn1->namaMenu, "Nasi Goreng");
	mn1 -> harga = 50000;
}

int main()
{
	struct menuMakanan mn1;
	isiMenu(&mn1);
	
	printf("Menu 1 adalah %s dengan harga %d\n", mn1.namaMenu, mn1.harga);
	return 0;
}
