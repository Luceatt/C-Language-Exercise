#include<stdio.h>
FILE *fp;

struct kotak{
	int jumlahKotak;
};

int main(){
	struct kotak ktk[101];
	
	fp = fopen("testdata.in", "r");
	
	int t;
	fscanf(fp, "%d\n", &t);
	int n;
	
	for(int i = 0; i < t; i++){
		fscanf(fp, "%d\n", &n);
		
		int totalKotak = 0;
		for(int j = 0; j < n; j++){
			fscanf(fp, "%d\n", &ktk[j].jumlahKotak);
			totalKotak += ktk[j].jumlahKotak;
		}
		
		int luas = 0;
		luas = 4 * totalKotak;
		int keliling = 0;
		
		int alas_dan_atas = 4 * n;
		int panjang_samping = ktk[0].jumlahKotak * 2 + ktk[n-1].jumlahKotak * 2;
		
		int total_sisiDalam = 0;
		if(n > 1){
			for(int j = 0; j < n-1; j++){
				if(ktk[j].jumlahKotak >= ktk[j+1].jumlahKotak){
					total_sisiDalam += (ktk[j].jumlahKotak - ktk[j+1].jumlahKotak) * 2;
				} else if(ktk[j].jumlahKotak < ktk[j+1].jumlahKotak){
					total_sisiDalam += (ktk[j+1].jumlahKotak - ktk[j].jumlahKotak) * 2;
				}
			}
		}
		
		keliling = alas_dan_atas + panjang_samping + total_sisiDalam;
		
		printf("Case #%d:", i+1);
		printf(" %d", keliling);
		printf(" %d\n", luas);
	}
	
	
//	for(int i = 0; i < n; i++){
//		printf("%d ", ktk[i].jumlahKotak);
//	}
	
	fclose(fp);
	return 0;
}
