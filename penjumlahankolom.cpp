#include <stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	for(int L = 0; L < T; L++){
		
		int N;
		scanf("%d", &N);
		int matrix[N][N];
		int hasiljumlahkolom[N] = {0};
		
		for (int i = 0; i < N; i++) {
	        for (int j = 0; j < N; j++) {
	            scanf("%d", &matrix[i][j]);
	            hasiljumlahkolom[j] += matrix[i][j];
	        }
	    }
	    
	    printf("Case #%d:", L + 1);
	    for (int k = 0; k < N; k++) {
	        printf(" %d", hasiljumlahkolom[k]);
	        }
	        printf("\n");
	}
	
	return 0;
}
