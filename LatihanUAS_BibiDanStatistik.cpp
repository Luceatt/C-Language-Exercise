#include<stdio.h>
FILE *fp;
int main(){
	fp = fopen("meanUAS.txt", "r");
	
	int n;
	fscanf(fp, "%d\n", &n);
	
	int array[n+1];
	int jumlah = 0;
	for(int i = 0; i < n; i++){
		fscanf(fp, "%d\n", &array[i]);
		jumlah += array[i];
	}
	
	double mean = (double)jumlah / n;
	printf("%.2lf\n", mean);
	
	fclose(fp);
	
	
}
