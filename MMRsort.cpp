#include <stdio.h>

int main() {
    int K;
    scanf("%d", &K);

    for (int testCase = 1; testCase <= K; testCase++) {
        int N;
        scanf("%d", &N);

        int MMR[N+1];
        for (int i = 0; i < N; i++) {
            scanf("%d", &MMR[i]);
        }
        
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (MMR[j] > MMR[j+1]) {
                int temp = MMR[j];
				MMR[j] = MMR[j+1];
				MMR[j+1] = temp;
            }
        }
    }

        int F;
        scanf("%d", &F);

        int player1 = 0, player2 = 0;

        for (int i = 0; i < N; i++) {
            if (MMR[i] == F) {
                if(i == 0){
                	player1 = MMR[i];
					player2 = MMR[i+1];
				} else if(i == N-1){
					player1 = MMR[i-1];
					player2 = MMR[i];
				} else{
					player1 = MMR[i];
					player2 = MMR[i+1];
				}
				break;
            } else if(MMR[i] != F){
                player1 = -1;
                player2 = -1;
            }
        }

        printf("CASE #%d: %d %d\n", testCase, player1, player2);
    }

    return 0;
}

