#include<stdio.h>
void recursive(int angka){
	if(angka > 0){
		recursive(angka - 1);
		printf("%c", 'A' + angka - 1);
		recursive(angka - 1);
	}
}

int main(){
	int t;
	scanf("%d", &t);
	int angka;
	
	for(int i = 0; i < t; i++){
		scanf("%d", &angka);
		
		recursive(angka);
		
		printf("\n");
	}
	return 0;
}
