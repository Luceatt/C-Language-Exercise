#include <stdio.h>
#include <string.h>

int main() {
    char string[52];
    scanf("%[^\n]", string); getchar();

    int len = strlen(string);
    int correct = 1;

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (string[i] == string[j]) {
            // Kedua karakter sama
            if (string[i] != '_') {
                // Jika keduanya bukan '_', maka benar
                continue;
            }
        } else if (string[i] == '_' || string[j] == '_') {
            // Salah satu karakter adalah '_', maka benar
            continue;
        }
        correct = 0;
        break;
    }

    if (correct == 1) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

