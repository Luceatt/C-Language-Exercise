#include <stdio.h>
#include <string.h>

int main() {
    int N;
    int T;
    scanf("%d %d", &N, &T);

    char string[N];
    scanf("%s", string);

    for (int j = 0; j < T; j++) {
        int indeks;
        scanf("%d", &indeks);

        if (indeks >= 0 && indeks < N) {
            if (string[indeks] >= 'A' && string[indeks] <= 'Z') {
                string[indeks] += 32; 
            } else if (string[indeks] >= 'a' && string[indeks] <= 'z') {
                string[indeks] -= 32; 
            }
        }
    }

    printf("%s\n", string);

    return 0;
}

