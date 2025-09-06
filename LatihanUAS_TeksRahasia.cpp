#include <stdio.h>

int main() {
    char kata[10000];
    int indeks;

    // Membaca satu baris teks
    if (scanf(" %[^\n]s", kata) != 1) {
        printf("Gagal membaca input.\n");
        return 1;
    }

    // Membaca indeks
    if (scanf("%d", &indeks) != 1) {
        printf("Gagal membaca indeks.\n");
        return 1;
    }

    int i = 0;
    int count = 0;
    
    // Mencari kata pada indeks yang diinginkan
    while (kata[i] != '\0') {
        if (kata[i] != ' ') {
            count++;
            if (count == indeks) {
                break;
            }
            while (kata[i] != ' ' && kata[i] != '\0') {
                i++;
            }
        } else {
            i++;
        }
    }

    // Memastikan indeks valid
    if (count < indeks) {
        printf("Indeks kata di luar batas.\n");
    } else {
        // Mencetak kata pada indeks yang diinginkan
        while (kata[i] != ' ' && kata[i] != '\0') {
            printf("%c", kata[i]);
            i++;
        }
        printf("\n");
    }

    return 0;
}

