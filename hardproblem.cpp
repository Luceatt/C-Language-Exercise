#include <stdio.h>
int main()
{
	int T, N;
	scanf("%d", &T); getchar();
	
	for(int i = 0; i < T; i++){
		int skor = 0;
		int total = 0;
		scanf("%d", &N);
		char jawaban[N+2];
		char lili[N+2];

		scanf("%s", &jawaban); getchar();
		scanf("%s", &lili); getchar();

		for (int j = 0; j < N; j++) {
            if (jawaban[j] == lili[j]) {
                skor++;
            }
        }
		
		total = skor * 100 / N;
		printf("Case #%d: %d\n", i+1, total);
	}
	return 0;
}
