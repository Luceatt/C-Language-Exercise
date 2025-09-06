#include<stdio.h>

FILE *fp;

struct orders{
	int qty;
	char makanan[100];
	int hargaSatuan, total;
};

int main(){
	//	Buka file
	char strings[100];
	fp = fopen("testdata.txt", "r");
	
	//	Baca per line
	fscanf(fp, "%[^\n]\n", strings);
	printf("%s\n", strings);
	fscanf(fp, "%[^\n]\n", strings);
	printf("%s\n", strings);
	
	printf("\n");
	fclose(fp);
	
	struct orders ord[100];
	fp = fopen("transaksiRestoran.txt", "r");
	
	int i = 0;
	int totalMakan = 0;
	while(!feof(fp)){
		fscanf(fp, "%d-%[^-]-%d\n", &ord[i].qty, ord[i].makanan, &ord[i].hargaSatuan);
		ord[i].total = ord[i].qty * ord[i].hargaSatuan;
		totalMakan += ord[i].total;
		i++;
	}
	
	for(int j = 0; j < i; j++){
		printf("%-3d | %-20s | %-10d | %8d\n", ord[j].qty, ord[j].makanan, ord[j].hargaSatuan, ord[j].total);
	}
	printf("Total Harga = %d\n", totalMakan);
	
	fclose(fp);
	
	return 0;
}
