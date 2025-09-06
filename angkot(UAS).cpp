#include<stdio.h>
void antrean(int angkot[], int size, int total, int urutan, int org){
	int kursi = 11;
	for(int i = 0; i < size; i++){
		kursi = 11 - angkot[i];
		urutan = urutan - kursi;
		org = org - kursi;
		
		printf("Kursi: %d\n", kursi);
		printf("Urutan: %d\n", urutan);
		printf("Orang: %d\n", org);
		if(urutan <= kursi){
			printf("%d\n", i+1);
			return;
		}
		
		if(org <= 0){
			break;
		}
	}
	printf("-1\n");
	return;
}
int main(){
	int org;
	int urutan;
	int jmlAngkot;
	scanf("%d %d %d", &org, &urutan, &jmlAngkot);
	
	int angkot[jmlAngkot+1];
	for(int i = 0; i < jmlAngkot; i++){
		scanf("%d", &angkot[i]);
	}
	
	int totalOrg = org + 1;
	antrean(angkot, jmlAngkot, totalOrg, urutan, org);
	
	return 0;
}
