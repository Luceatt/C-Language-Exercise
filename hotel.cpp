#include<stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int kamar[N];
	
	for(int i = 0; i < N; i++){
		scanf("%d", &kamar[i]);
	}
	
	int counter = 0;
	for(int i = 0; i < N; i++){
		int angkasama = 1;
		
		for(int j = 0; j < i; j++){
			if(kamar[i] == kamar[j]){
				angkasama = 0;
				break;
			} 
		}
		
		if(angkasama == 1){
			counter++;
		}
		
	}
	
	printf("%d\n", counter);
	
	return 0;
}
