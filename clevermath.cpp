#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	int x, y;
	
	for(int i = 0; i < t; i++){
		scanf("%d %d", &x, &y);
		
		int satuan = 1;
		int hasil = 0;
		int penjumlahan = 0;
		
		while(x > 0 || y > 0){
			penjumlahan = x % 10 + y % 10;
			penjumlahan %= 10;
			
			hasil = hasil + (penjumlahan * satuan);
			x /= 10;
			y /= 10;
			
			satuan *= 10;
		}
		printf("Case #%d: %d\n", i+1, hasil);
		
	}
	
	return 0;
}
