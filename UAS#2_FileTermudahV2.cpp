#include<stdio.h>
FILE *fp;
struct data{
	int angka;
	char spasi;
	int akhir;
};
int main(){
	struct data dt[1001];
	fp = fopen("FileTermudahV2.txt", "r");
	int angka[1000];
	
	int count = 0;
	while(!feof(fp)){
		fscanf(fp, "%d%c", &dt[count].angka, &dt[count].spasi);
		count++;
	}
	
//	for(int i = 0; i < count; i++){
//		printf("%d%c", dt[i].angka, dt[i].spasi);
//	}
//	printf("\n");
	
	int totalBaris = 0;
	int idxAngka = 0;
	for(int i = 0; i < count; i++){
		if(dt[i].spasi == ' '){
			idxAngka++;
		} else if(dt[i].spasi == '\n' || dt[i].spasi == '\0'){
			dt[totalBaris].akhir = idxAngka+1;
			totalBaris++;
			idxAngka = 0;
		}
	}

	int matrix[totalBaris][1001];
	int index = 0;
	for(int i = 0; i < totalBaris; i++){
		for(int j = 0; j < dt[i].akhir; j++){
			matrix[i][j] = dt[index].angka;
			index++;
		}
	}
	
//	for(int i = 0; i < totalBaris; i++){
//		for(int j = 0; j < dt[i].akhir; j++){
//			printf("%d ", matrix[i][j]);
//		}
//		printf("\n");
//	}	

	int jumlahPerBaris[1001] = {0};
	for(int i = 0; i < totalBaris; i++){
		for(int j = 0; j < dt[i].akhir; j++){
			jumlahPerBaris[i] += matrix[i][j];
		}
	}
	
	int max = -1;
	int min = 100000001;
	for(int i = 0; i < totalBaris; i++){
		if(max < jumlahPerBaris[i]){
			max = jumlahPerBaris[i];
		}
		if(min > jumlahPerBaris[i]){
			min = jumlahPerBaris[i];
		}
	}
	
	printf("Max: %d\n", max);
	printf("Min: %d\n", min);
	
	int result = max - min;
	printf("%d\n", result);
	
	fclose(fp);
	return 0;
}
