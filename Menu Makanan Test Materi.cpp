#include<stdio.h>

FILE *fp;

int main(){
	//	Buka file
	char strings[100];
	fp = fopen("testdata.txt", "r");
	
	//	Baca per line
	fscanf(fp, "%[^\n]\n", strings);
	printf("%s\n", strings);
	fscanf(fp, "%[^\n]\n", strings);
	printf("%s\n", strings);
	
	
	return 0;
}
