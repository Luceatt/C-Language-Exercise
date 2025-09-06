#include<stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		int botol;
		int tukar;
		scanf("%d %d", &botol, &tukar);
		int total = 0;
		int counter = 0;
		total = botol - tukar + 1; // Hitung Jumlah Awal Botol Saat Dikurangi
		
		while(total > 0){
			total = total - tukar + 1; 
			counter++;
		}
		printf("Case #%d: %d\n", i+1, counter + botol);
	}
	return 0;
}
