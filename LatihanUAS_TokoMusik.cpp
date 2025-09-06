#include<stdio.h>
FILE *fp;

struct musik{
	int qty;
	char nama[101];
	int price;
};

int main(){
	struct musik msk[1001];
	
	fp = fopen("beliAlatMusik.txt", "r");
	int cust;
	int banyakAlmus;
	fscanf(fp, "%d\n", &cust);
	
	for(int i = 0; i < cust; i++){
		fscanf(fp, "%d\n", &banyakAlmus);
		
		int item = 0;
		int total = 0;
		int discountPrice = 0;
		int finalPrice = 0;
		
		for(int j = 0; j < banyakAlmus; j++){
			fscanf(fp, "%d#%[^@]@%d\n", &msk[j].qty, &msk[j].nama, &msk[j].price);
			
			item = msk[j].qty * msk[j].price;
			total += item;
		}
		
		discountPrice = total * 15 / 100;
		finalPrice = total - discountPrice;
		
		printf("Customer #%d: Rp %d\n", i+1, finalPrice);
	}
	
	fclose(fp);
	
	return 0;
}
