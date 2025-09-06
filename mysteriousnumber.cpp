#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	int x;
	
	int total = 0;
	double total1 = 0;
	
	int cubetot = 0;
	double cubetot1 = 0;
	
	for(int i = 0; i < n; i++){
		scanf("%d", &x);	
		
		printf("Case #%d : ", i+1);
		
		// SQUARE
		total1 = sqrt(x);
		total = sqrt(x);
		double selisih = total1 - total;
//		printf("%d\n", total1);
		
		// CUBIC
		cubetot = cbrt(x);
		cubetot1 = cbrt(x);
		double selisihcube = cubetot1 - cubetot;
//		printf("%d\n", selisihcube);
		
		// PRIME
		int prima = 1;
		for(int j = 2; j <= x/2; j++){
			if(x % j == 0){
				prima = 0;
				break;
			}
		}
			
		if(selisih == 0 && selisihcube == 0){
			printf("square cubic\n");
		} else if(selisihcube == 0){
			printf("cubic\n");
		} else if(selisih == 0){
			printf("square\n");
		} else if(prima == 1){
			printf("prime\n");
		} else{
			printf("none\n");
		}
	
	}
	return 0;
}
