#include<stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	
	int jojo, lili, bibi;
	scanf("%d %d %d", &jojo, &lili, &bibi);
	
	int peserta[N];
	int total = 0;
	int sum = 0;
	int rata_rata = 0;
	for(int i = 0; i < N; i++){
		scanf("%d", &peserta[i]);
		total += peserta[i];
	}
	
	sum = jojo + lili + bibi + total;
	rata_rata = sum / (N + 3);
	
	if(jojo >= rata_rata){
		printf("Jojo lolos\n");
	} else{
		printf("Jojo tidak lolos\n");
	}

	if(lili >= rata_rata){
		printf("Lili lolos\n");
	} else{
		printf("Lili tidak lolos\n");
	}
	
	if(bibi >= rata_rata){
		printf("Bibi lolos\n");
	} else{
		printf("Bibi tidak lolos\n");
	}		
	return 0;
}
