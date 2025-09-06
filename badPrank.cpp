#include<stdio.h>
#include<string.h>
FILE *fp;

struct kalimat{
	char string[1001];
};

void ganti(struct kalimat *kt, int size){
	for(int i = 0; i < size; i++){
		if(kt->string[i] == '0'){
			kt->string[i] = 'O';
		} else if(kt->string[i] == '1'){
			kt->string[i] = 'I';
		} else if(kt->string[i] == '3'){
			kt->string[i] = 'E';
		} else if(kt->string[i] == '4'){
			kt->string[i] = 'A';
		} else if(kt->string[i] == '5'){
			kt->string[i] = 'S';
		} else if(kt->string[i] == '6'){
			kt->string[i] = 'G';
		} else if(kt->string[i] == '7'){
			kt->string[i] = 'T';
		} else if(kt->string[i] == '8'){
			kt->string[i] = 'B';
		} else{
			kt->string[i] = kt->string[i];
		}
	}
}

void final(struct kalimat *kt, int size, int n){
	for(int i = 0; i < size; i++){
		if(kt->string[i] == ' '){
			kt->string[i] = ' ';	
		} else{
			kt->string[i] = ((kt->string[i] - n - 'A' + 26) % 26) + 'A';
		}
	}
}

int main(){
	struct kalimat kt;
	
	fp = fopen("testdata.in", "r");
	
	int t;
	fscanf(fp, "%d\n", &t);
	
	for(int i = 0; i < t; i++){
		int n;
		fscanf(fp, "%d\n", &n); 
		
		fscanf(fp, "%[^\n]\n", &kt.string);
		
		int size = strlen(kt.string);
		ganti(&kt, size);
		final(&kt, size, n);
		
		printf("Case #%d: %s\n", i + 1, kt.string);
	}
	
	return 0;
}
