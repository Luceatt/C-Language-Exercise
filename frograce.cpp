#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	int K;
	scanf("%d", &T);
	
	for(int i = 1; i <= T; i++){
		scanf("%d", &K);
		int jaraklompat = 0;
		int counter = 0;
		int hasil = 0;
		
//		for(int j = 0; j < K; j++){
//			
			while(counter < K){
				jaraklompat += 1;	
				counter += jaraklompat;
				hasil++;
//				printf("Total: (%d) ", jaraklompat);
//			}
		}
//		printf("\n");
//		printf("Counter: %d\n", counter);
		printf("Case #%d: %d\n", i, hasil);
	}
	return 0;
}
