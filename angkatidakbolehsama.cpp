#include <stdio.h>

int main() {
    int n = 7; // Jumlah angka yang ingin Anda periksa (sesuaikan dengan kebutuhan)
    int numbers[n]; // Array untuk menyimpan angka-angka yang telah ditemukan

    printf("Masukkan %d angka: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);

        // Periksa apakah angka ini sudah muncul sebelumnya
        for (int j = 0; j < i; j++) {
            if (numbers[i] == numbers[j]) {
                printf("Salah\n");
                return 0;
            }
        }
    }

    printf("Benar\n");
    return 0;
}
