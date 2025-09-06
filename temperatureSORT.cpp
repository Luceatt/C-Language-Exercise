#include<stdio.h>
#include<string.h>
FILE *fp;

struct suhu{
	char kota[1001];
	double derajat;
	char satuan;
};

void tukar(struct suhu *a, struct suhu *b){
	struct suhu temp = *a;
	*a = *b;
	*b = temp;
}

void konversi(struct suhu *data){
	if(data -> satuan == 'F'){
		data -> derajat = (data -> derajat - 32) *  5 / 9;
	}
}

void konversiBalik(struct suhu *data){
	if(data -> satuan == 'F'){
		data -> derajat = (data -> derajat * 9 / 5) + 32;
	}
}

void sort(struct suhu tmp[], int n){
	for(int i = 0; i < n-1; i++){
		int isSwapped = 0;
		
		for(int j = 0; j < n-i-1; j++){
			if(tmp[j].derajat > tmp[j+1].derajat || (tmp[j].derajat == tmp[j+1].derajat && strcmp(tmp[j].kota, tmp[j+1].kota) > 0)){
				tukar(&tmp[j], &tmp[j+1]);
				isSwapped = 1;
			}
		}
		if(isSwapped == 0){
			return;
		}
	}
}

int main(){
	struct suhu tmp[1001];
	char string[1001];
	
	fp = fopen("testdata.in", "r");
	
	int i = 0;
	while(!feof(fp)){
		fscanf(fp, "%[^#]#%lf#%c\n", &tmp[i].kota, &tmp[i].derajat, &tmp[i].satuan);
		
		konversi(&tmp[i]);
		
		i++;
	}
	
	sort(tmp, i);
	
	for(int j = 0; j < i; j++){
		
		konversiBalik(&tmp[j]);
		
		printf("%s is %.2lf%c\n", tmp[j].kota, tmp[j].derajat, tmp[j].satuan);
	}
	
	fclose(fp);
	return 0;
}
