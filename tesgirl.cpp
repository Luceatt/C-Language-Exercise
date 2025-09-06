#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        char nama[10001];
        scanf("%s", nama);
        int panjang = strlen(nama);
        int huruf_berbeda = 0;

        int ada[26] = {0};

        for (int j = 0; j < panjang; j++) {
            int indeks = nama[j] - 'a';
            if (ada[indeks] == 0) {
                huruf_berbeda++;
                ada[indeks] = 1;
            }
        }

        printf("Case #%d: ", i + 1);
        if (huruf_berbeda % 2 == 0) {
            printf("Yay\n");
        } else {
            printf("Ewwww\n");
        }
    }
    return 0;
}
