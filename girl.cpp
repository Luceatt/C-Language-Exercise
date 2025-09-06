#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++){
		char nama[100001];
		scanf("%s", nama);
		
		int panjang = strlen(nama);
		int counter = 0;
		
		for(int j = 0; j < panjang; j++){
			int hurufsama = 1;	
			
			for(int k = 0; k < j; k++){
				if(nama[j] == nama[k]){
					hurufsama = 0;
					break;	
				}
			}
			if(hurufsama == 1){
				counter++;
			} 
		}
		
		printf("Case #%d: ", i+1);
			if(counter % 2 == 0){
				printf("Yay\n");
			} else{
				printf("Ewwww\n");
			}
	}
	return 0;
}
