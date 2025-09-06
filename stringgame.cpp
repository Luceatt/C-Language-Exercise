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

        if (indeks >= 0 && indeks < N) { // Memastikan indeks berada dalam rentang yang benar
            if (string[indeks] >= 'A' && string[indeks] <= 'Z') {
                string[indeks] += 32; // Mengubah huruf besar menjadi huruf kecil
            } else if (string[indeks] >= 'a' && string[indeks] <= 'z') {
                string[indeks] -= 32; // Mengubah huruf kecil menjadi huruf besar
            }
        }
    }

    printf("%s\n", string);

    return 0;
}

